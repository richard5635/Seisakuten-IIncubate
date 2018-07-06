﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaycastExample : MonoBehaviour
{
    EggParameter eggParameter;
    EggMovement eggMovement;
    public GameObject Indicator;
    float distance = 50f;
    [HideInInspector] public Vector3 touchPoint;
    int touchCount = 0;
    bool isTouchDelay = false;

    int randCount = 1;

    EggPhysicalAI EggPhysicalAI;

    // Use this for initialization
    void Awake()
    {
        eggParameter = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggParameter>();
        eggMovement = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggMovement>();
        EggPhysicalAI = GameObject.Find("Egg").transform.Find("clean").gameObject.GetComponent<EggPhysicalAI>();
    }

    // Update is called once per frame
    void Update()
    {

        // Bit shift the index of the layer (8) to get a bit mask
        int layerMask = 1 << 8;

        // This would cast rays only against colliders in layer 8.
        // But instead we want to collide against everything except layer 8. The ~ operator does this, it inverts a bitmask.
        layerMask = ~layerMask;

        if (Input.GetMouseButtonDown(0))
        {
            //create a ray cast and set it to the mouses cursor position in game
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit2;
            if (Physics.Raycast(ray, out hit2, distance))
            {
                eggMovement.touchCount++;
                eggMovement.touchPosition = hit2.point;
                if (!isTouchDelay)
                {
                    eggMovement.ProcessInput();
                    eggMovement.UpdateParameterText();
                }
                touchPoint = hit2.point;
                Instantiate(Indicator, hit2.point, Quaternion.identity);
                StartCoroutine(Delay(1));
            }
        }
    }

    IEnumerator Delay(float time)
    {
        Debug.Log("Started touch delay");
        isTouchDelay = true;
        yield return new WaitForSeconds(time);
        isTouchDelay = false;
        yield return null;
    }

    //RaycastHit hit;
    //// Does the ray intersect any objects excluding the player layer
    //if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
    //{
    //    Debug.DrawRay(transform.position, hit.point * hit.distance, Color.yellow);
    //    Debug.Log("Did Hit");
    //}
    //else
    //{
    //    Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * 1000, Color.white);
    //    Debug.Log("Did not Hit");
    //}
    //}
}
