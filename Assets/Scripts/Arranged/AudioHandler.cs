using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioHandler : MonoBehaviour {
	AudioSource audioSource;
	
	float volume;
	float pitch;


	// Use this for initialization
	void Awake () {
		audioSource = GetComponent<AudioSource>();
	}
	void OnCollisionEnter(Collision col)
    {
        if(col.gameObject.tag=="Wall")
        {
			pitch = 1.2f - Mathf.Clamp(col.impulse.magnitude / 10, 0, 0.3f);
			volume = col.impulse.magnitude * 0.5f;
            //Debug.Log("Magintude = " + volume);
			audioSource.pitch = pitch;
            audioSource.volume = Mathf.Clamp(volume, 0, 1);
            audioSource.Play();
        }
    }
	
}
