using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShardHandler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Destroy(gameObject, Random.Range(27.0f, 30.0f));
		StartCoroutine(SuddenGravity());
	}

	void DestroyShards()
	{
		Destroy(gameObject, Random.Range(18.0f, 26.0f));
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void DestroySelf()
	{

	}

	IEnumerator SuddenGravity()
	{
		yield return new WaitForSeconds(Random.Range(21.0f,23.0f));
		GetComponent<Rigidbody>().useGravity = true;
	}
}
