using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class AudioVisualizer02_Value : MonoBehaviour {

	// Use this for initialization
	Text MicVolume;
	void Awake () {
		MicVolume = GetComponent<Text>();
	}
	
	// Update is called once per frame
	void Update () {
		MicVolume.text = ToDB(MicInput.MicLoudness).ToString();
	}

	float ToDB(float num)
	{
		if(Mathf.Log10(100 * num) < 0) return 0;
		return Mathf.Round(100f * 20f * Mathf.Log10(100 * num)) / 100f;
	}
}
