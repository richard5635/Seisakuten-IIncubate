using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class followEggXZ : MonoBehaviour {
	public GameObject egg;
    Vector3 displacement;
	// Use this for initialization
	void Start () {
		displacement = transform.position - egg.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		if(egg!=null)transform.position = new Vector3(
			egg.transform.position.x + displacement.x,
			transform.position.y,
			egg.transform.position.z + displacement.z
		);
	}
}
