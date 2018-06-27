﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceExpressionHandler : MonoBehaviour {

	public GameObject blush;
    private GameObject setExpression;
    private IEnumerator animate;

    //Call by using expressionHandler.Expression(expressionHandler.blush);

    //I can also set each animation to stop by including script right inside the animator.
    IEnumerator Animate(GameObject obj, float time)
    {
        Debug.Log("Start Expression.");
        obj.GetComponent<Animator>().SetBool("Start",true);
        yield return new WaitForSeconds(time) ;
        Debug.Log("Stop Expression.");
        obj.GetComponent<Animator>().SetBool("Start", false);
        yield return null;
    }

//add duration parameter for animation later.
    public void Expression(GameObject obj, float time)
    {
        setExpression = obj;
        obj.SetActive(true);
        StartCoroutine(Animate(obj, time));
    }
}
