using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HatchlingHandler : MonoBehaviour {
	EggParameter eggParameter;
	public GameObject Particle01;
	public GameObject Particle02;
	public DialogueHandler dialogueHandler;
	public Shader Shader01;
	public Shader Shader02;
	public float MinAge = 2f;
	public float MaxAge = 4f;
	public float minX = -0.8f;
	public float maxX = 0.8f;
	public float minY = -0.55f;
	public float maxY = 0.55f;
	public float minZ = -1.6f;
	public float maxZ = 0.4f;
	Vector3 destination;
	public PID PID;
	float interval;
	float initTime;
	float elapsedTime = 0;

	// Use this for initialization

	void Awake()
	{
		dialogueHandler = GameObject.Find("DialogueText").GetComponent<DialogueHandler>();
	}
	void Start () {
		StartCoroutine(LifeSpan());
		eggParameter = GameObject.Find("Egg").transform.Find("clean").GetComponent<EggParameter>();
		StartCoroutine(RandomizeTarget());
		transform.parent = GameObject.Find("IIncubate").transform;
		PID = new PID(0.01f, 0, 2f);

		if(eggParameter.TotalParameter >= eggParameter.PhaseA)
		{
			//Particle01
			transform.Find("Particle01").gameObject.SetActive(true);
			if(eggParameter.TotalParameter >= eggParameter.PhaseB)
			{
				//Particle02
				transform.Find("Particle02").gameObject.SetActive(true);
				if(eggParameter.TotalParameter >= eggParameter.PhaseC)
				{
					//Particle03
					transform.Find("Particle03").gameObject.SetActive(true);
				}
			}

		}
	}
	
	// Update is called once per frame

	//adjust speed of hatchling
	void Update () {
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
			), (elapsedTime*Random.Range(0.5f,1)) / (interval*Random.Range(1,2))
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
		dialogueHandler.Narrate("HatchlingDis",2);
		Destroy(gameObject);
	}

	IEnumerator RandomizeTarget()
	{
		while(true)
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
