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
		Narrate("intro", 2);
	}

	Dictionary<string, string> Dialogue = new Dictionary<string, string>()
	{
		{"intro","Welcome to I Incubate"},
		{"FirstKnock","おや?\nたまごさんが反応したようです。"},
		{"Hatch","たまごがふ化しようとしている。"},
		{"HatchlingDis","「ヒナ」がどこかへ行ってしまったようです。"},
		{"",""}
	};

	// void 

	public void Narrate(string key, float time){
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
