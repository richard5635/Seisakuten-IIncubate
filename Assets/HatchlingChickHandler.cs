using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HatchlingChickHandler : MonoBehaviour
{
    EggParameter eggParameter;
    GameController gameController;
    DialogueHandler dialogueHandler;
    Light hatchlingLight;
    ShaderHandler shaderHandler;
    GameObject chick;
    GameObject cHead;
    GameObject cBody;
    GameObject cFeet;
    GameObject cWings;
    Vector3 destination;
    Vector3 direction;
    float MinAge = 20f;
    float MaxAge = 20f;
    float minX = -0.75f;
    float maxX = 0.75f;
    float minY = -0.5f;
    float maxY = 0.5f;
    float minZ = 1.6f;
    float maxZ = 0.4f;
    public PID PID;
    float interval;
    float initTime;
    float elapsedTime = 0;

    bool isBusy = false;

    Rigidbody rg;
    Transform tf;


    // Use this for initialization
    void Awake()
    {
        eggParameter = GameObject.Find("Egg").transform.Find("clean").GetComponent<EggParameter>();
        gameController = GameObject.Find("IIncubate").GetComponent<GameController>();
        eggParameter = GameObject.Find("Egg").transform.Find("clean").GetComponent<EggParameter>();
        shaderHandler = GameObject.Find("Egg").transform.Find("clean").GetComponent<ShaderHandler>();
        dialogueHandler = GameObject.Find("DialogueText").GetComponent<DialogueHandler>();
        hatchlingLight = transform.Find("Light").GetComponent<Light>();


        chick = transform.Find("Chick").gameObject;
        cHead = chick.transform.Find("Head").gameObject;
        cBody = chick.transform.Find("Body").gameObject;
        cFeet = chick.transform.Find("Feet").gameObject;
        cWings = chick.transform.Find("Wings").gameObject;

        rg = GetComponent<Rigidbody>();
        tf = gameObject.transform;
    }

    void Start()
    {
        StartCoroutine(RandomizeTarget());
        StartCoroutine(LifeSpan());
        transform.parent = GameObject.Find("IIncubate").transform;

        if (eggParameter.TotalParPass < eggParameter.PhaseD)
        {
            if (eggParameter.TotalParPass >= eggParameter.PhaseA)
            {
                
                transform.Find("Particle01").gameObject.SetActive(true);
                transform.Find("Particle02").gameObject.SetActive(true);

                if (eggParameter.TotalParPass >= eggParameter.PhaseB)
                {
                    cBody.SetActive(true);
					cFeet.SetActive(true);
                    transform.Find("Particle03").gameObject.SetActive(true);
                    transform.Find("Particle04").gameObject.SetActive(true);

                    if (eggParameter.TotalParPass >= eggParameter.PhaseC)
                    {
                    	cWings.SetActive(true);
                        transform.Find("Particle05").gameObject.SetActive(true);
                        transform.Find("Particle06").gameObject.SetActive(true);
                        GetComponent<Rigidbody>().isKinematic = true;
                    }

                }
            }
        }
        if (eggParameter.TotalParPass >= eggParameter.PhaseC && eggParameter.TotalParPass < eggParameter.PhaseD)
        {
            StartCoroutine(FlyAround());
        }
        else
        {
            StartCoroutine(WalkAround());
        }



        shaderHandler.changeShatteredEggColor(cHead.GetComponent<MeshRenderer>().material,
            eggParameter.ParameterColor(eggParameter.TotalParPass)[0],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[1],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[2], 1);

        shaderHandler.changeShatteredEggColor(cBody.GetComponent<MeshRenderer>().material,
            eggParameter.ParameterColor(eggParameter.TotalParPass)[0],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[1],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[2], 1);

        shaderHandler.changeShatteredEggColor(cWings.transform.GetChild(0).GetComponent<MeshRenderer>().material,
            eggParameter.ParameterColor(eggParameter.TotalParPass)[0],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[1],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[2], 1);

        shaderHandler.changeShatteredEggColor(cWings.transform.GetChild(1).GetComponent<MeshRenderer>().material,
        eggParameter.ParameterColor(eggParameter.TotalParPass)[0],
        eggParameter.ParameterColor(eggParameter.TotalParPass)[1],
        eggParameter.ParameterColor(eggParameter.TotalParPass)[2], 1);
    }

    void Update()
    {
        if(Input.touchCount > 0)
        {
            if(Input.GetTouch(0).phase == TouchPhase.Began)
            {
                if(!isBusy)StartCoroutine(StandUp());
            }
        }
        if(Input.GetKeyDown("l"))
        {
            if(!isBusy)StartCoroutine(StandUp());
        }
    }

    IEnumerator WalkAround()
    {
        // Debug.Log("Chick Walks Around");
        float forceJ = 10f;
        float elapsedTime = 0;
        direction = new Vector3(
                Random.Range(-1f, 1f),
                1,
                Random.Range(-1f, 1f)
            );

        while (elapsedTime < 0.2f)
        {
            //tf.rotation = Quaternion.Lerp(tf.rotation, Quaternion.LookRotation(new Vector3(tf.forward.x, destination.y, tf.forward.z)), elapsedTime * 10);
            //Debug.Log("Elapsed Time: " + elapsedTime);
            rg.AddRelativeForce(new Vector3(
                direction.x * forceJ,
                direction.y * forceJ,
                direction.z * forceJ
            ));
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        yield return new WaitForSeconds(Random.Range(0.6f, 1.2f));
        yield return WalkAround();
    }

    IEnumerator FlyAround()
    {
        // Debug.Log("Chick Flies Around");
        float elapsedTime = 0;
        float time = Random.Range(1.0f, 2.0f);
        while (elapsedTime < 2)
        {
            transform.position = Vector3.Slerp(
            	transform.position,
            	new Vector3(
                	destination.x,
                	destination.y,
                	destination.z
            	), (elapsedTime / 2)
        	);
			elapsedTime += Time.deltaTime;
			yield return new WaitForEndOfFrame();
        }
		yield return new WaitForSeconds(Random.Range(0.6f, 1.2f));
        yield return FlyAround();
    }

    IEnumerator RandomizeTarget()
    {
        while (true)
        {
            interval = Random.Range(1.0f, 2.0f);
            destination = new Vector3(
                Random.Range(minX, maxX),
                Random.Range(minY, maxY),
                Random.Range(minZ, maxZ)
            );
            yield return new WaitForSeconds(interval);
        }
    }

    IEnumerator LifeSpan()
    {
		float age = Random.Range(120, 180);

        yield return new WaitForSeconds(age);
		//Move the egg away
		yield return new WaitForSeconds(0.5f);
        dialogueHandler.Narrate("HatchlingDis", 2);
		Destroy(gameObject);
    }

    IEnumerator StandUp()
    {
        Debug.Log("The Chick notices you!");
        isBusy = true;
        float elapsedTime = 0;
        
        rg.useGravity = false;
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
        yield return new WaitForSeconds(2);
        isBusy = false;
        
    }
}
