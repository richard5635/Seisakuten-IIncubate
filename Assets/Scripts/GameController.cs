﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{

    // Use this for initialization
    public float count = 0;
    bool cStarted = false;
    public Text TextCountdown;
	public GameObject Lid;
    EggParameter eggParameter;
    EggMovement eggMovement;
	EggPhysicalAI eggPhysicalAI;
	GameObject Egg;
	Rigidbody rg;
    Transform tf;
    public GameObject SpotLight;
    void Awake()
    {
        Application.targetFrameRate = 50;

        eggParameter = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggParameter>();
        eggMovement = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggMovement>();
		eggPhysicalAI = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggPhysicalAI>();
		Egg = GameObject.Find("Egg");
		rg = Egg.GetComponent<Rigidbody>();
        tf = Egg.transform;
		//StartCoroutine(ReproduceEgg());
    }

    void Start()
    {
        StartCoroutine(CountDown());
        eggParameter.isNew = false;
    }
    public IEnumerator CountDown()
    {
		if(eggParameter.isNew)cStarted = false;
        if (!cStarted)
        {
			cStarted = true;
            count = 60;
            while (count > 0)
            {
                //Debug.Log("Counting.. " + count);
                TextCountdown.text = Mathf.Floor(count).ToString();
                yield return new WaitForSeconds(1);
                count -= 1;
            }
            if (count == 0)
            {
                DecideEnd();
            }
        }
		else{
			Debug.Log("Countdown has already started!");
		}
        yield return null;
    }
    void DecideEnd()
    {
		eggPhysicalAI.isBusy = true;
        if (eggParameter.TotalParameter >= eggParameter.PhaseB && eggParameter.TotalParameter < eggParameter.PhaseC)
        {
            eggMovement.GoodEnding();
        }
        else
        {
            eggMovement.BadEnding();
        }
    }

	public void ReproduceEgg()
	{
		StartCoroutine(IReproduceEgg());
	}

	IEnumerator IReproduceEgg()
	{
		//Cause of Error? Not yet known, but when called outside it doesnt work, so do smth with processing inside.
		Debug.Log("Reproducing Egg");
		// float duration = 2.0f;
		float elapsedTime = 0;
		// while(elapsedTime < duration)
		// {
		// 	Debug.Log(elapsedTime);
		// 	Lid.transform.localPosition = Vector3.Lerp(Vector3.zero, new Vector3(0, 0, -0.4f), elapsedTime/duration);
		// 	elapsedTime += Time.deltaTime;
		// 	yield return null;
			
		// }
		yield return new WaitForSeconds(1);
		Debug.Log("Dropping New Egg!");
		tf.position = new Vector3(0, 0.2f, 1.2f);
        SpotLight.GetComponent<Animator>().SetBool("isOn", true);

        elapsedTime = 0;
        eggMovement.ShowCleanEgg();
        rg.isKinematic = false;
        while(elapsedTime < 0.5f)
        {
            //eggMovement.ApplyForce(Egg.GetComponent<Rigidbody>(), new Vector3(0,0,-30.0f), 0.5f);
            rg.AddForce(0, 0, -100.0f);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        //eggMovement.ApplyForce(Egg.GetComponent<Rigidbody>(), new Vector3(0,0,-30.0f), 0.5f);
		
		
        eggParameter.isNew = true;
        eggPhysicalAI.isBusy = false;

        StartCoroutine(CountDown());

        eggMovement.isListening = true;
        eggMovement.Listen();
        
		yield return null;
	}
}
