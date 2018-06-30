using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShardHandler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Destroy(gameObject, Random.Range(18.0f, 26.0f));
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void DestroySelf()
	{

	}

	void OnCollisionEnter(Collision col)
	{
		if(col.gameObject.tag=="Wall")
		{
			Destroy(gameObject);
		}
	}
}
