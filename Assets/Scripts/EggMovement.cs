using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
// using UnityEngine.Windows.Speech;
using UnityEngine.UI;

public class EggMovement : MonoBehaviour
{
    public GameObject EggShattered;

    //Microphone Related
    [Header("Microphone Related")]
    [HideInInspector] public bool isListening = true;
    public float noisyThreshold = 19.0f;
    public float noticeThreshold = 14.0f;
    public float waveThreshold = 6.0f;
    public GameObject soundIndicator;
    public GameObject soundIndicator02;
    private Vector3 initialPosition;
    private Vector3 initialRotation;
    private float x;
    private float y;
    Rigidbody rg;
    Transform tf;


    [Header("UI")]
    public Text TextStarePar;
    public Text TextSoundPar;
    public Text TextKnockPar;
    GameController gameController;
    expressionHandler exHandler;
    FaceExpressionHandler faceHandler;
    [HideInInspector] public Vector3 touchPosition;
    private Transform initialTransform;
    [HideInInspector] public int touchCount = 0;
    GameObject eggShattered;

    EggParameter eggParameter;
    EggPhysicalAI eggPhysicalAI;
    EggMovement eggMovement;
    ShaderHandler shaderHandler;
    public DialogueHandler dialogueHandler;

    float rotX;
    float rotY;
    public float RotationGain = 5;
    int randCount;


    private string[] keywords = { "よしよし", "もしもし", "卵を探せ", "どこ" };

    // private KeywordRecognizer m_Recognizer;

    // Use this for initialization
    public void ProcessInput()
    {
        //call a variable based on string name?
        if (touchCount == 1)
        {
            dialogueHandler.Narrate("FirstKnock", 2);
            exHandler.Expression(exHandler.notice, 1.0f);
        }
        randCount = UnityEngine.Random.Range(1, 3);
        switch (randCount)
        {
            case 1:
                if (eggParameter.TotalParameter >= eggParameter.PhaseA)
                {
                    if (!eggPhysicalAI.isBusy)
                    {
                        eggParameter.AddParameter(0, 2, 0);
                        eggPhysicalAI.RotateTowards(touchPosition);
                        exHandler.Expression(exHandler.notice, 1.0f);
                    }
                }
                break;
            case 2:
                //Debug.Log("Jumpting towards you");
                eggParameter.AddParameter(0, 2, 0);
                eggPhysicalAI.JumpCloser(touchPosition);
                break;
            default:
                break;
        }


    }

    void Awake()
    {
        exHandler = GameObject.Find("IIncubate").transform.Find("EggExpression").gameObject.GetComponent<expressionHandler>();
        faceHandler = GetComponent<FaceExpressionHandler>();
        gameController = transform.parent.parent.gameObject.GetComponent<GameController>();
        shaderHandler = GetComponent<ShaderHandler>();

        tf = transform.parent;
        rg = transform.parent.gameObject.GetComponent<Rigidbody>();

        initialPosition = tf.position;
        initialRotation = tf.eulerAngles;

        eggParameter = GetComponent<EggParameter>();
        eggPhysicalAI = GetComponent<EggPhysicalAI>();
        eggMovement = GetComponent<EggMovement>();
    }


    void Start()
    {
        initialPosition = transform.localPosition;
        Listen();
        StartCoroutine(StareHandling());

        // m_Recognizer = new KeywordRecognizer(keywords);
        // m_Recognizer.OnPhraseRecognized += OnPhraseRecognized;
        // m_Recognizer.Start();
    }

    IEnumerator StareHandling()
    {
        int randomInt = 0;
        while (true)
        {
            randomInt = UnityEngine.Random.Range(1, 3);
            switch (randomInt)
            {
                case 1:
                    eggParameter.AddParameter(0, 0, 3);
                    eggMovement.UpdateParameterText();
                    break;
                case 2:
                    eggParameter.AddParameter(0, 0, -1);
                    eggMovement.UpdateParameterText();
                    break;
                default:
                    break;
            }
            yield return new WaitForSeconds(1.0f);
        }
    }

    // void OnPhraseRecognized(PhraseRecognizedEventArgs args)
    // {
    //     StringBuilder builder = new StringBuilder();
    //     builder.AppendFormat("{0} ({1}){2}", args.text, args.confidence, Environment.NewLine);
    //     builder.AppendFormat("\tTimestamp: {0}{1}", args.phraseStartTime, Environment.NewLine);
    //     builder.AppendFormat("\tDuration: {0} seconds {1}", args.phraseDuration.TotalSeconds, Environment.NewLine);
    //     Debug.Log(builder.ToString());

    //     switch (args.text)
    //     {
    //         case "よしよし":
    //             Debug.Log(args.text);
    //             eggParameter.AddParameter(10, 0, 0);
    //             break;
    //         case "もしもし":
    //             Debug.Log(args.text);
    //             eggParameter.AddParameter(10, 0, 0);
    //             break;
    //         case "卵を探せ":
    //             Debug.Log(args.text);
    //             eggParameter.AddParameter(10, 0, 0);
    //             break;
    //         case "どこ":
    //             Debug.Log(args.text);
    //             eggParameter.AddParameter(10, 0, 0);
    //             break;
    //         default:
    //             break;
    //     }
    //     UpdateParameterText();

    // }
    public void Listen()
    {
        StartCoroutine(GetLoudness());
    }

    IEnumerator GetLoudness()
    {
        float volume;
        //Debug.Log("Listening Start " + volume);
        while (isListening)
        {
            volume = ToDB(MicInput.MicLoudness);
            //Debug.Log(volume);
            //Debug.Log("Listening... " + volume);
            if (volume >= waveThreshold)
            {
                Instantiate(soundIndicator, soundIndicator.transform.position, soundIndicator.transform.rotation);
                Instantiate(soundIndicator02, soundIndicator02.transform.position, soundIndicator02.transform.rotation);
            }
            if (volume >= noticeThreshold && volume < noisyThreshold)
            {
                //Debug.Log("Changed Sd Parameter by +1");
                eggParameter.AddParameter(2, 0, 0);
                eggMovement.UpdateParameterText();
                eggPhysicalAI.SoundReaction(1);
            }
            else if (volume >= noisyThreshold)
            {
                //Debug.Log("Changed Sd Parameter by ");
                eggParameter.AddParameter(4, 0, 0);
                eggMovement.UpdateParameterText();
                eggPhysicalAI.SoundReaction(0);
            }
            else
            {
                //Debug.Log("No Sd change.");
            }

            yield return new WaitForSeconds(0.2f);
        }
        yield return null;
    }

    float ToDB(float num)
    {
        if (Mathf.Log10(100 * num) < 0) return 0;
        return Mathf.Round(100f * 20f * Mathf.Log10(100 * num)) / 100f;
    }

    void RestartEgg()
    {
        transform.position = initialPosition;
        transform.eulerAngles = initialRotation;
        //transform.parent.gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
        transform.parent.gameObject.GetComponent<Rigidbody>().isKinematic = true;
        transform.parent.gameObject.GetComponent<Rigidbody>().isKinematic = false;
    }

    public void UpdateParameterText()
    {
        TextSoundPar.text = eggParameter.SoundParameter.ToString();
        TextStarePar.text = eggParameter.StareParameter.ToString();
        TextKnockPar.text = eggParameter.KnockParameter.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        //x += Input.GetAxis("Horizontal");
        //y += Input.GetAxis("Vertical");
        //transform.localPosition = new Vector3(x, y, initialPosition.z);
        rotX = Input.GetAxis("Vertical") * RotationGain;
        rotY = Input.GetAxis("Horizontal") * RotationGain;

        transform.parent.gameObject.GetComponent<Rigidbody>().AddTorque(new Vector3(
                rotY * 0.25f,
                rotX * 0.25f,
                0));

        #region Testing Expressions
        //Testing Expressions
        if (Input.GetKeyDown(KeyCode.A))
        {
            exHandler.Expression(exHandler.question, 2.0f);
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            exHandler.Expression(exHandler.sweat, 2.0f);
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            exHandler.Expression(exHandler.notice, 2.0f);
        }
        if (Input.GetKeyDown(KeyCode.D))
        {
            exHandler.Expression(exHandler.notice, 2.0f);
        }
        if (Input.GetKeyDown(KeyCode.Z))
        {
            faceHandler.Expression(faceHandler.blush, 2.0f);
        }

        //----end of Testing Expressions----
        #endregion

        if (Input.GetKeyDown(KeyCode.Q))
        {
            eggParameter.AddParameter(10, 0, 0);
            UpdateParameterText();
        }
        if (Input.GetKeyDown(KeyCode.W))
        {
            eggParameter.AddParameter(0, 10, 0);
            UpdateParameterText();
        }
        if (Input.GetKeyDown(KeyCode.E))
        {
            eggParameter.AddParameter(0, 0, 10);
            UpdateParameterText();
        }
        if (Input.GetKeyDown(KeyCode.R))
        {
            eggParameter.ResetParameter();
            UpdateParameterText();
        }
        if (Input.GetKeyDown(KeyCode.T))
        {
            RestartEgg();
        }
    }

    public void GoodEnding()
    {
        Debug.Log("Good Ending.");
        StartCoroutine(Hatch(true));
    }

    public void HideCleanEgg()
    {
        gameObject.GetComponent<MeshRenderer>().enabled = false;
        gameObject.GetComponent<CapsuleCollider>().enabled = false;
        gameObject.GetComponents<SphereCollider>()[0].enabled = false;
        gameObject.GetComponents<SphereCollider>()[1].enabled = false;
    }

    public void ShowCleanEgg()
    {
        gameObject.GetComponent<MeshRenderer>().enabled = true;
        gameObject.GetComponent<CapsuleCollider>().enabled = true;
        gameObject.GetComponents<SphereCollider>()[0].enabled = true;
        gameObject.GetComponents<SphereCollider>()[1].enabled = true;
    }

    public void ApplyForce(Rigidbody rigidb, Vector3 v, float duration)
    {
        StartCoroutine(IApplyForce(rigidb, v, duration));
    }

    IEnumerator IApplyForce(Rigidbody rigidb, Vector3 v, float duration)
    {
        float elapsedTime = 0;
        while (elapsedTime < duration)
        {
            rigidb.AddForce(v.x, v.y, v.z);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
    }

    IEnumerator Hatch(bool good)
    {
        //Microphone
        dialogueHandler.Narrate("Hatch", 2);
        isListening = false;
        eggPhysicalAI.isBusy = true;

        Vector3 initPos = tf.position;
        rg.isKinematic = true;
        float duration = 2.0f;
        float elapsedTime = 0;
        gameController.SpotLight.GetComponent<Animator>().SetBool("isOn", false);
        while (elapsedTime < duration)
        {
            tf.position = Vector3.Lerp(initPos, new Vector3(0, 0, 0.5f), elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        yield return new WaitForSeconds(1);
        eggShattered = Instantiate(EggShattered, transform.position, transform.rotation, transform.parent);
        eggParameter.TotalParPass = eggParameter.TotalParameter;

        for (int i = 0; i < eggShattered.transform.childCount; i++)
        {
            if (eggShattered.transform.GetChild(i).GetComponent<MeshRenderer>() == null) continue;
            Material eggShard = eggShattered.transform.GetChild(i).GetComponent<MeshRenderer>().material;
            shaderHandler.changeShatteredEggColor(eggShard,
                eggParameter.ParSpecColor(eggParameter.SoundParameter),
                eggParameter.ParSpecColor(eggParameter.KnockParameter),
                eggParameter.ParSpecColor(eggParameter.StareParameter), 1);
        }
        eggParameter.inhColor = new Color(
            eggParameter.ParSpecColor(eggParameter.SoundParameter),
                eggParameter.ParSpecColor(eggParameter.KnockParameter),
                eggParameter.ParSpecColor(eggParameter.StareParameter), 1
        );
        eggParameter.Initialize();

        HideCleanEgg();

        if (good)
        {

        }
        else
        {

        }
        yield return new WaitForSeconds(0.5f);
        eggShattered.transform.parent = GameObject.Find("Shells").transform;
        gameController.ReproduceEgg();
        yield return null;
    }




    public void BadEnding()
    {
        Debug.Log("Bad Ending");
        StartCoroutine(Hatch(false));
    }

}
