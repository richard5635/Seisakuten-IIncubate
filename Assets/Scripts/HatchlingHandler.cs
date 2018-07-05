using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HatchlingHandler : MonoBehaviour
{
    EggParameter eggParameter;
    GameController gameController;
    public DialogueHandler dialogueHandler;
    Light hatchlingLight;
    ShaderHandler shaderHandler;

    float MinAge = 20f;
    float MaxAge = 20f;
    float minX = -0.8f;
    float maxX = 0.8f;
    float minY = -0.55f;
    float maxY = 0.55f;
    float minZ = -1.6f;
    float maxZ = 0.4f;

    Vector3 destination;
    public PID PID;
    float interval;
    float initTime;
    float elapsedTime = 0;

    // Use this for initialization

    void Awake()
    {
        gameController = GameObject.Find("IIncubate").GetComponent<GameController>();
        eggParameter = GameObject.Find("Egg").transform.Find("clean").GetComponent<EggParameter>();
        shaderHandler = GameObject.Find("Egg").transform.Find("clean").GetComponent<ShaderHandler>();
        dialogueHandler = GameObject.Find("DialogueText").GetComponent<DialogueHandler>();
        hatchlingLight = transform.Find("Light").GetComponent<Light>();
    }
    void Start()
    {
        StartCoroutine(LifeSpan());
        StartCoroutine(RandomizeTarget());
        transform.parent = GameObject.Find("IIncubate").transform;
        PID = new PID(0.01f, 0, 2f);

        GameObject sphere = transform.Find("Sphere").gameObject;

        //This makes it slow somehow
        shaderHandler.changeShatteredEggColor(transform.Find("Sphere").GetComponent<MeshRenderer>().material,
            eggParameter.ParameterColor(eggParameter.TotalParPass)[0],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[1],
            eggParameter.ParameterColor(eggParameter.TotalParPass)[2], 1);



        if (eggParameter.TotalParPass >= eggParameter.PhaseA)
        {
            sphere.transform.localScale = new Vector3(0.15f, 0.15f, 0.15f);
            //Particle01
            transform.Find("Particle01").gameObject.SetActive(true);
            transform.Find("Particle02").gameObject.SetActive(true);

            if (eggParameter.TotalParPass >= eggParameter.PhaseB)
            {
                //Particle02
                transform.Find("Particle03").gameObject.SetActive(true);
                transform.Find("Particle04").gameObject.SetActive(true);

                if (eggParameter.TotalParPass >= eggParameter.PhaseC)
                {
                    //Particle03
                    transform.Find("Particle05").gameObject.SetActive(true);
                    transform.Find("Particle06").gameObject.SetActive(true);
                    if (eggParameter.TotalParPass >= eggParameter.PhaseD)
                    {
                        transform.Find("Particle01").gameObject.SetActive(false);
                        transform.Find("Particle02").gameObject.SetActive(false);
                        transform.Find("Particle03").gameObject.SetActive(false);
                        transform.Find("Particle04").gameObject.SetActive(false);
                        transform.Find("Particle05").gameObject.SetActive(false);
                        transform.Find("Particle06").gameObject.SetActive(false);
                    }
                }
            }
        }

        if (eggParameter.TotalParPass >= eggParameter.PhaseA && eggParameter.TotalParPass < eggParameter.PhaseB)
        {
            // sphere.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            hatchlingLight.intensity = 5;
        }
        else if (eggParameter.TotalParPass >= eggParameter.PhaseB && eggParameter.TotalParPass < eggParameter.PhaseC)
        {
            hatchlingLight.intensity = 10;
            // sphere.transform.localScale = new Vector3(0.25f, 0.25f, 0.25f);
        }
        else if (eggParameter.TotalParPass >= eggParameter.PhaseC && eggParameter.TotalParPass < eggParameter.PhaseD)
        {
            hatchlingLight.intensity = 15;
            // sphere.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
        }
        else
        {

        }
    }

    // Update is called once per frame

    //adjust speed of hatchling
    void Update()
    {
        // GetComponent<Rigidbody>().AddForce(new Vector3(
        // 	PID.Update(destination.x, transform.position.x, 5.0f),
        // 	PID.Update(destination.y, transform.position.y, 5.0f),
        // 	PID.Update(destination.z, transform.position.z, 5.0f)
        // ));
        transform.position = Vector3.Slerp(
            transform.position,
            new Vector3(
                destination.x,
                destination.y,
                destination.z
            ), (elapsedTime * Random.Range(0.5f, 1)) / (interval * Random.Range(1, 2))
        );
        elapsedTime += Time.deltaTime;
    }

    IEnumerator LifeSpan()
    {
        float time = 0;
        float age = Random.Range(MinAge, MaxAge);
        Debug.Log("HAtchling Bornn");
        // while(time < age)
        // {
        // 	time += Time.deltaTime;
        // 	yield return null;
        // }
        yield return new WaitForSeconds(age);
        transform.Find("Pop").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        dialogueHandler.Narrate("HatchlingDis", 2);
        // gameController.ReproduceEgg();
        Destroy(gameObject);

    }

    IEnumerator RandomizeTarget()
    {
        while (true)
        {
            initTime = Time.time;
            elapsedTime = 0;
            interval = Random.Range(1.0f, 5.0f);
            destination = new Vector3(
                Random.Range(minX, maxX),
                Random.Range(minY, maxY),
                Random.Range(minZ, maxZ)
            );
            yield return new WaitForSeconds(interval);

        }
    }
}
