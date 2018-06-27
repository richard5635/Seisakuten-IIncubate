using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelfDestroy : MonoBehaviour {
	float time = 1.0f;
	float delay = 1.0f;

	// Use this for initialization
	void Start () {
		// StartCoroutine(DestroySelf());
		Destroy (gameObject, this.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).length + delay); 
	}
	
	IEnumerator DestroySelf()
	{
		yield return null;
	}
}
