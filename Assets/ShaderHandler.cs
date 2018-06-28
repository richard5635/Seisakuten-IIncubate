using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShaderHandler : MonoBehaviour {
	//Lerp Change in Color
	//Change color based on parameter value
	public Material EggMaterial;
	public Material EggShatMaterial;

	// Use this for initialization
	void Awake () {
		EggMaterial = GetComponent<MeshRenderer>().material;
		//StartCoroutine(GradualChange());
	}
	
	// Update is called once per frame
	void Update () {
		//EggMaterial.color = Color.Lerp(EggMaterial.color, Color.red, Time.deltaTime / 3);
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

	public void changeColor(float r, float g, float b, float a)
	{
		StartCoroutine(GradualChangeColor(r, g, b, a));
	}
	IEnumerator GradualChangeColor(float r, float g, float b, float a)
	{
		float time = 0.5f;
		float elapsedTime = 0f;
		Debug.Log("Changing color.. " + elapsedTime);
		while(elapsedTime < time)
		{
			Debug.Log("Changing color.. " + elapsedTime);
			EggMaterial.color = Color.Lerp(EggMaterial.color, new Color(r,g,b,a), elapsedTime/time);
			elapsedTime += Time.deltaTime;
			yield return null;
		}
	}

	public void changeShatteredEggColor(Material mat, float r, float g, float b, float a)
	{
		mat.color = new Color(r, g, b, a);
	}
	void AddColor(Material mat, int r, int g, int b, int a)
	{
		mat.SetColor("_Color", new Color(
			r,
			g,
			b,
			a));
		// mat.color = new Color(
		// 	mat.color.r + r,
		// 	mat.color.g + g,
		// 	mat.color.b + b,
		// 	mat.color.a + a
		// );
	}
}
