using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueHandler : MonoBehaviour {

	// Use this for initialization
	Text displayText;

	void Awake () {
		displayText = GetComponent<Text>();
		displayText.text = Dialogue["intro"];
	}

	void Start()
	{
		Narrate(2, "intro");
	}

	Dictionary<string, string> Dialogue = new Dictionary<string, string>()
	{
		{"intro","Welcome.\nWelcome"},
		{"d02","The content of text 03"},
		{"leave","The ball left the cage."}
	};
	void Narrate(float time, string key){
		StartCoroutine(INarrate(time, key));
	}

	IEnumerator INarrate(float time, string key)
	{
		displayText.text = Dialogue[key];
		GetComponent<Animator>().SetBool("isDisplaying",true);
		yield return new WaitForSeconds(time);
		GetComponent<Animator>().SetBool("isDisplaying",false);
		yield return null;
	}
}
