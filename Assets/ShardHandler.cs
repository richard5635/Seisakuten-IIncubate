using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShardHandler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Destroy(gameObject, Random.Range(18.0f, 26.0f));
		//StartCoroutine(SuddenGravity());
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void DestroySelf()
	{

	}

	IEnumerator SuddenGravity()
	{
		yield return new WaitForSeconds(2.0f);
		GetComponent<Rigidbody>().useGravity = true;
	}

	void OnCollisionEnter(Collision col)
	{
		if(col.gameObject.tag=="Wall")
		{
			Destroy(gameObject);
		}
	}
}
