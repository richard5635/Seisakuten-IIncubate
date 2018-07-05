using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EggPhysicalAI : MonoBehaviour
{
    //Components
    Material mat;
    AudioSource audioSource;
    EggMovement eggMovement;
    EggParameter eggParameter;
    expressionHandler exHandler;
    FaceExpressionHandler faceHandler;
    ShaderHandler shaderHandler;

    Vector3 pos;
    Vector3 initPos;
    Vector3 initRot;
    Rigidbody rg;
    Transform tf;
    public PID PIDx;
    public PID PIDy;
    public PID PIDz;
    private float minAngle = 2.0f;
    bool isBalancing = true;
    [HideInInspector] public bool isBusy = false;

    //IEnumerator
    IEnumerator HeatUpVar;
    IEnumerator CoolDownVar;
    IEnumerator JumpVar;
    IEnumerator RollVar;
    IEnumerator ShakeVar;
    IEnumerator LookAroundVar;

    //Heat Parameter
    bool isHeatingUp = true;
    float heatRed = 0;


    IEnumerator StandUp()
    {
        yield return null;
    }

    // Use this for initialization
    void Awake()
    {
        //IEnumerator
        HeatUpVar = IHeatUp();
        CoolDownVar = ICoolDown();
        JumpVar = Jump();
        RollVar = Roll();
        ShakeVar = Shake();
        LookAroundVar = LookAround();


        shaderHandler = GetComponent<ShaderHandler>();

        mat = GetComponent<MeshRenderer>().material;
        audioSource = GetComponent<AudioSource>();
        eggMovement = GetComponent<EggMovement>();
        eggParameter = GetComponent<EggParameter>();
        exHandler = GameObject.Find("IIncubate").transform.Find("EggExpression").gameObject.GetComponent<expressionHandler>();
        faceHandler = GetComponent<FaceExpressionHandler>();

        initPos = transform.localPosition;
        initRot = transform.eulerAngles;
        pos = transform.position;
        rg = transform.parent.gameObject.GetComponent<Rigidbody>();
        tf = transform.parent;

        //Standard PID
        PIDx = new PID(0.4f, 0, 2f);
        PIDy = new PID(0.4f, 0, 2f);
        PIDz = new PID(0.4f, 0, 2f);
    }

    void Start()
    {
        DecideBehavior();
    }
    // Update is called once per frame
    void Update()
    {
        if (isBalancing) SelfBalancing();

        //Touch
        if (Input.touchCount > 0)
        {
            if (Input.GetTouch(0).phase == TouchPhase.Began)
            {
                StopAllMovements();
                StopCoroutine(eggParameter.ChangeColorVar);
                Debug.Log("Start Heat Up");
                isBusy = true;
                cBeforeHeat = mat.color;
                heatRed = mat.color.r;
                StartCoroutine(HeatUpVar);
                //exHandler.Expression(exHandler.hot, 1.0f);
            }
            else if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                StopCoroutine(HeatUpVar);
                StartCoroutine(CoolDownVar);
            }
        }

        if (Input.GetKeyDown("k"))
        {
            StopAllMovements();
            StopCoroutine(eggParameter.ChangeColorVar);
            Debug.Log("Start Heat Up");
            isBusy = true;
            cBeforeHeat = mat.color;
            heatRed = mat.color.r;
            StartCoroutine(HeatUpVar);
            exHandler.Expression(exHandler.hot, 1.0f);
        }
        if (Input.GetKeyUp("k"))
        {
            StopCoroutine(HeatUpVar);
            StartCoroutine(CoolDownVar);
        }
    }

    void SelfBalancing()
    {
        //Debug.Log(tf.eulerAngles);

        Vector3 eggEuler = new Vector3(
            mapto180(tf.eulerAngles.x),
            mapto180(tf.eulerAngles.y),
            mapto180(tf.eulerAngles.z)
        );

        rg.AddTorque(new Vector3(
            PIDx.Update(initRot.x, eggEuler.x, 1.0f),
            0,
            PIDz.Update(initRot.z, eggEuler.z, 1.0f)
        ));
        //Debug.Log("Torque Added at : " + PIDx.Update(0, eggEuler.x, 1.0f) + ", " + 0 + ", " + PIDz.Update(0, eggEuler.z, 1.0f));
    }

    float mapto180(float s)
    {
        // if(s >= 0.0f && s <= 180.0f)return s;
        // else if( s > 180.0f && s < 360.0f) return s-360;
        // else return s;
        if (s > 180) return s - 360;
        else return s;
    }

    public float map(float s, float a1, float a2, float b1, float b2)
    {
        // if (s > a2) return b2;
        // else if (s < a1) return b1;
        return b1 + (s - a1) / (a2 - a1) * (b2 - b1);
    }

    void StopAllMovements()
    {
        Debug.Log("Stopping All Movements!");
        isBalancing = true;
        StopCoroutine(ShakeVar);
        StopCoroutine(RollVar);
        StopCoroutine(JumpVar);
        StopCoroutine(LookAroundVar);
    }


    void DecideBehavior()
    {
        if (isBusy)
        {
            StartCoroutine(Idle());
            return;
        }
        switch (Random.Range(0, 3))
        {
            case 0:
                StartCoroutine(ShakeVar);
                break;
            case 1:
                if (eggParameter.TotalParameter >= eggParameter.PhaseA)
                {
                    StartCoroutine(RollVar);
                }
                else
                {
                    StartCoroutine(Idle());
                }
                break;
            case 2:
                if (eggParameter.TotalParameter >= eggParameter.PhaseB)
                {
                    StartCoroutine(JumpVar);
                }
                else
                {
                    StartCoroutine(Idle());
                }
                break;
            case 3:
                if (eggParameter.TotalParameter >= eggParameter.PhaseC)
                {
                    StartCoroutine(LookAroundVar);
                }
                else
                {
                    StartCoroutine(Idle());
                }
                break;
            default:
                StartCoroutine(Idle());
                break;
        }
    }

    IEnumerator Idle()
    {
        yield return new WaitForSeconds(1.0f);
        DecideBehavior();
    }

    IEnumerator Shake()
    {
        float torque;
        Vector3 randTorque;
        float randDist = Random.Range(1.0f, 2.0f);
        if (eggParameter.TotalParameter >= eggParameter.PhaseA && eggParameter.TotalParameter < eggParameter.PhaseB)
        {
            torque = 10;
        }
        else if (eggParameter.TotalParameter >= eggParameter.PhaseB && eggParameter.TotalParameter < eggParameter.PhaseC)
        {
            torque = 20;
        }
        else if (eggParameter.TotalParameter >= eggParameter.PhaseC)
        {
            torque = 30;
        }
        else
        {
            torque = 0;
        }
        Debug.Log("Shake Start");
        //Distribute Torque
        randTorque = new Vector3(
            torque / randDist,
            0.2f * (torque / randDist),
            (torque / randDist)
        );

        yield return new WaitForSeconds(Random.Range(0.3f, 0.8f));
        rg.AddTorque(new Vector3(randTorque.x, randTorque.y, randTorque.z));
        yield return new WaitForSeconds(Random.Range(0.3f, 0.8f));
        rg.AddTorque(new Vector3(-randTorque.x, -randTorque.y, -randTorque.z));
        yield return new WaitForSeconds(Random.Range(1.5f, 3.0f));
        Debug.Log("Shake Finishes.");
        yield return new WaitForSeconds(1.0f);
        DecideBehavior();
    }

    IEnumerator Roll()
    {
        if( eggParameter.TotalParameter < eggParameter.PhaseB) exHandler.Expression(exHandler.question, 1.5f) ;
        else if (eggParameter.TotalParameter >= eggParameter.PhaseB && eggParameter.TotalParameter < eggParameter.PhaseC) exHandler.Expression(exHandler.cheerful, 1.5f);
        else exHandler.Expression(exHandler.annoyed, 1.5f) ;

        float torque = 10f;

        if (eggParameter.TotalParameter >= eggParameter.PhaseB) torque = 20f;

        isBalancing = false;
        Debug.Log("Roll Start");
        rg.AddTorque(torque, 0, 0);
        yield return new WaitForSeconds(1.5f);
        for (int i = 0; i < 3; i++)
        {
            rg.AddTorque(0, torque, 0);
            yield return new WaitForSeconds(3.0f);
        }
        isBalancing = true;
        Debug.Log("Roll Finish");
        yield return new WaitForSeconds(1.0f);
        DecideBehavior();
    }

    IEnumerator Jump()
    {
        if(eggParameter.TotalParameter < eggParameter.PhaseD) exHandler.Expression(exHandler.sweat, 1.5f);
        else exHandler.Expression(exHandler.annoyed, 1.5f) ;

        float forceJ = 40f;
        Debug.Log("Jump Start");

        float elapsedTime = 0;
        float time = 0.5f;
        while (elapsedTime < time)
        {
            rg.AddRelativeForce(new Vector3(0, forceJ, 0));
            elapsedTime += Time.deltaTime;
        }
        Debug.Log("Jump Finish");
        yield return new WaitForSeconds(1.0f);
        DecideBehavior();
    }

    IEnumerator LookAround()
    {
        yield return null;
    }
    public void RotateTowards(Vector3 target)
    {
        StartCoroutine(LookTowards(target, 0.5f));
    }
    IEnumerator LookTowards(Vector3 target)
    {
        Debug.Log("The Egg notices you!");
        isBalancing = false;
        transform.eulerAngles = Vector3.Lerp(transform.eulerAngles, target, Time.deltaTime * 5);
        yield return new WaitForSeconds(3);
        isBalancing = true;
        yield return null;
    }
    void nullifyForce()
    {
        rg.velocity = Vector3.zero;
        rg.angularVelocity = Vector3.zero;
    }

    //Input Delay

    IEnumerator Delay(float time)
    {
        isBusy = true;
        yield return new WaitForSeconds(time);
        isBusy = false;
    }
    IEnumerator LookTowards(Vector3 target, float time)
    {
        //if(isDelayTouch)StopCoroutine(LookTowards());
        //Fix
        isBusy = true;
        nullifyForce();
        Vector3 newDirection = new Vector3(
            target.x - tf.position.x,
            0,
            target.z - tf.position.z
        );
        float elapsedTime = 0;
        Debug.Log("The Egg notices you!");
        rg.useGravity = false;
        isBalancing = false;
        Vector3 stPos = tf.position;
        Vector3 stRot = tf.eulerAngles;


        //Stand Up
        //Land Position
        while (elapsedTime < 0.2f)
        {
            tf.position = Vector3.Lerp(stPos, new Vector3(stPos.x, stPos.y + 0.1f, stPos.z), (elapsedTime / 1) * 10);
            //tf.eulerAngles = Vector3.Lerp(stRot, new Vector3(0, 0, 0), elapsedTime * 3);
            tf.rotation = Quaternion.Lerp(tf.rotation, Quaternion.LookRotation(Vector3.zero), elapsedTime * 10);
            elapsedTime += Time.deltaTime;
            //Debug.Log("Elapsed Time: " + elapsedTime);
            yield return new WaitForEndOfFrame();
        }
        rg.useGravity = true;
        nullifyForce();
        elapsedTime = 0;
        yield return new WaitForSeconds(0.2f);
        while (elapsedTime < time)
        {
            tf.rotation = Quaternion.Lerp(tf.rotation, Quaternion.LookRotation(newDirection), elapsedTime * 4);
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        Debug.Log("The Egg stops looking at you.");
        yield return null;

        isBalancing = true;
        StartCoroutine(Delay(1));
    }

    bool Standing()
    {
        if (rg.angularVelocity == Vector3.zero &&
            tf.eulerAngles.x < minAngle && tf.eulerAngles.x > -minAngle &&
            tf.eulerAngles.y < minAngle && tf.eulerAngles.y > -minAngle &&
            tf.eulerAngles.z < minAngle && tf.eulerAngles.z > -minAngle) return true;
        return false;
    }

    public void SoundReaction(int num)
    {
        switch (num)
        {
            case 0:
                if (eggParameter.TotalParameter >= eggParameter.PhaseA)
                {
                    if (!isBusy)
                    {
                        StartCoroutine(ScaredAway());
                        exHandler.Expression(exHandler.shocked, 0.6f);
                    }
                }
                break;
            case 1:
                if(!isBusy)
                {
                    eggMovement.ApplyForce(rg, new Vector3(0,24,24), 0.3f);
                    exHandler.Expression(exHandler.notice, 0.6f);
                }
                break;
            default:
                break;
        }
    }

    IEnumerator ScaredAway()
    {
        //Give animation
        //exHandler.Expression(exHandler.notice, 0.8f);
        Debug.Log("Scared!!");
        isBusy = true;
        isBalancing = false;

        float forceJ = 20f;
        float elapsedTime = 0;
        float time = 1.0f;
        while (elapsedTime < time)
        {
            rg.AddRelativeForce(new Vector3(Random.Range(-0.2f, 0.2f), 0.1f * forceJ, forceJ));
            elapsedTime += Time.deltaTime;
        }
        //DecideBehavior();

        yield return new WaitForSeconds(1);
        isBalancing = true;
        StartCoroutine(Delay(1));
    }

    int heatLevel = 0;
    Color cBeforeHeat;

    public IEnumerator IHeatUp()
    {
        while (true)
        {
            Debug.Log("Red = " + heatRed);
            heatRed += 0.15f;
            shaderHandler.changeColor(heatRed, mat.color.g, mat.color.b, mat.color.a);
            eggParameter.AddParameter(0, 1, 0);
            if(heatRed > 1 && heatRed < 1.5f)exHandler.Expression(exHandler.hot, 1.0f);
            yield return new WaitForSeconds(0.45f);

            // int timer = 0;
            // if(timer % 3 == 2)
            // {

            // }
            // timer ++;
        }
    }

    public IEnumerator ICoolDown()
    {
        Debug.Log("Stop Heat Up");
        shaderHandler.changeColor(cBeforeHeat.r, cBeforeHeat.g, cBeforeHeat.b, cBeforeHeat.a);
        isBalancing = false;
        yield return new WaitForSeconds(2.0f);
        isBalancing = true;
        isBusy = false;
        StartCoroutine(eggParameter.ChangeColorVar);
        DecideBehavior();
    }

    IEnumerator RollTo(float x, float z)
    {
        yield return null;
    }

    public void JumpCloser(Vector3 target)
    {
        StartCoroutine(IJumpCloser(target));
    }
    IEnumerator IJumpCloser(Vector3 target)
    {
        float forceJ = 40f;
        float elapsedTime = 0;
        float time = 0.5f;
        while (elapsedTime < time)
        {
            rg.AddForce((target - tf.position)*forceJ);
            elapsedTime += Time.deltaTime;
        }
        yield return new WaitForSeconds(1);
        StartCoroutine(Delay(1));
    }
}
