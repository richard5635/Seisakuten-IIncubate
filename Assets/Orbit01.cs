using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Orbit01 : MonoBehaviour
{

    public GameObject attracter; // Set this to the gameobject that this gameobject will be attracted to 

    public float gravityConstant; // Affects strength of gravity

    public Vector2 startVelocity; // This will be the starting velocity of our second object (it needs to have velocity in order to orbit)

    private Rigidbody rb;

    private float attracterMass;

    // Use this for initialization
    void Start()
    {
        rb = this.GetComponent<Rigidbody>();
        attracterMass = attracter.GetComponent<Rigidbody>().mass;

        rb.velocity = startVelocity;
    }

    // FixedUpdate is called once per physics update
    void FixedUpdate()
    {
        //Vector3 diff = attracter.transform.position - transform.position;
        // Vector3 direction = diff.normalized;
        // float gravitationalForce = (attracter.GetComponent<Rigidbody>().mass * GetComponent<Rigidbody>().mass * gravityConstant) / diff.sqrMagnitude;
        // GetComponent<Rigidbody>().AddForce(direction * gravitationalForce);
		//transform.RotateAround(attracter.transform.position, Vector3.up, 20*Time.deltaTime);

		
    }
}
