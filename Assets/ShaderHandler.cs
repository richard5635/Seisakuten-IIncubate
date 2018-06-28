using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShaderHandler : MonoBehaviour {
	public Material EggMaterial;

	// Use this for initialization
	void Awake () {
		EggMaterial = GetComponent<MeshRenderer>().material;
		StartCoroutine(GradualChange());
	}
	
	// Update is called once per frame
	void Update () {
	}

	IEnumerator GradualChange()
	{
		float time = 60f;
		float elapsedTime = 0f;
		while(elapsedTime < time)
		{
			AddColor(EggMaterial,1,1,1,0);
			elapsedTime++;
			yield return new WaitForSeconds(0.5f);
		}
		
		yield return null;
	}

	void AddColor(Material mat, int r, int g, int b, int a)
	{
		// mat.SetColor("_Color", new Color(
		// 	mat.color.r + r,
		// 	mat.color.g + g,
		// 	mat.color.b + b,
		// 	mat.color.a + a));
		mat.color = new Color(
			mat.color.r + r,
			mat.color.g + g,
			mat.color.b + b,
			mat.color.a + a
		);
	}
}
