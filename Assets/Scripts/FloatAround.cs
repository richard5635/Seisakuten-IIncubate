using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatAround : MonoBehaviour
{

    //Parameters I want to adjust : 
    GameObject[] shells;

    public Transform target;
    Vector3 dir;
    Vector3 forward;
    Vector3 side;
    Vector3 cross;
    Rigidbody rg;
    Transform egg;
    Transform shard;

    // Use this for initialization

    void Awake()
    {

    }
    void Start()
    {
        forward = transform.forward;
        dir = target.transform.position;
        side = Vector3.Cross(dir, forward);
        rg = transform.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // dir = target.transform.position - transform.position;
        // transform.LookAt(dir.normalized);
        // rg.AddForce(dir.normalized * 1);
        // cross = Vector3.Cross(dir, forward);
        // rg.AddForce(cross.normalized * 1);
        for (int i = 0; i < transform.childCount; i++)
        {
            if (transform.childCount > 1) Debug.Log("Adding force to shards.");
            egg = transform.GetChild(i);
            for (int j = 0; j < egg.childCount; j++)
            {
                shard = egg.GetChild(j);
                rg = shard.GetComponent<Rigidbody>();
				forward = shard.transform.forward;
                dir = new Vector3( 
                    target.transform.position.x - shard.transform.position.x,
                    0,
                    target.transform.position.z - shard.transform.position.z
                );
                side = Vector3.Cross(dir, forward);
                if(rg != null)

                {
                    rg.AddForce(dir.normalized * 0.1f);
                    rg.AddForce(side.normalized * 0.1f);
					// shard.RotateAround(target.transform.position, Vector3.up, 20f * Time.deltaTime);
                }

            }
        }
    }
}
