using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EggShatteredBehavior : MonoBehaviour {

	// Use this for initialization
	Vector3 explosionCenter;

	void Awake()
	{
	}
	void Start () {
		StartCoroutine(Hatch());
		Destroy(gameObject, 210);
	}
	IEnumerator Hatch()
	{
		explosionCenter = new Vector3(
			transform.position.x,
			transform.position.y + 0.8f,
			transform.position.z
		);
		float duration = 0.5f;
		float elapsedTime = 0.0f;
		while(elapsedTime < duration)
		{
			for(int i = 0; i < transform.childCount; i++)
			{
				if(transform.GetChild(i).GetComponent<Rigidbody>() == null)continue;
				//transform.GetChild(i).GetComponent<Rigidbody>().AddRelativeForce(new Vector3(0, 0.05f, 0));
				transform.GetChild(i).GetComponent<Rigidbody>().AddExplosionForce(12.0f,explosionCenter,4.0f, 1.0f);
				elapsedTime += Time.deltaTime;
			}
			yield return null;
		}
		yield return new WaitForSeconds(2);
		//Destroy(gameObject);
		yield return null;
	}

	void Disappear(GameObject obj)
	{
		
	}


}
