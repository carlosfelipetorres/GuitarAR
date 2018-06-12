using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Metronome : MonoBehaviour {

	public double bpm;
	public Text metronomeText;

    double nextTick = 0.0F; // The next tick in dspTime
    double sampleRate = 0.0F; 
    bool ticked = false;
	PhotonView photonView;

    void Start() {
		metronomeText =  GameObject.Find ("MetroText").GetComponent<Text>();
        double startTick = AudioSettings.dspTime;
        sampleRate = AudioSettings.outputSampleRate;

        nextTick = startTick + (60.0 / bpm);

		GetComponent<AudioSource> ().volume = 0;
		photonView = PhotonView.Get (this);
    }

    void LateUpdate() {
        if ( !ticked && nextTick >= AudioSettings.dspTime ) {
            ticked = true;
            BroadcastMessage( "OnTick" );
        }
    }

    // Just an example OnTick here
    void OnTick() {
        //Debug.Log( "Tick" );
		GetComponent<AudioSource>().Play();
    }

    void FixedUpdate() {
        double timePerTick = 60.0f / bpm;
        double dspTime = AudioSettings.dspTime;

        while ( dspTime >= nextTick ) {
            ticked = false;
            nextTick += timePerTick;
        }
		metronomeText.text = "BPM: " + bpm.ToString();
    }

	public void MetronomePlusOne (){
		photonView.RPC("MPlusOne", PhotonTargets.All);
	}

	[PunRPC]
	public void MPlusOne () {
		bpm = bpm + 1;
	}

	public void MetronomeMinusOne (){
		photonView.RPC("MMinusOne", PhotonTargets.All);
	}

	[PunRPC]
	public void MMinusOne () {
		bpm = bpm - 1;
	}
		
	public void PlayMetro () {
		photonView.RPC("PlayM", PhotonTargets.All);
	}

	[PunRPC]
	public void PlayM () {
		GetComponent<AudioSource> ().volume = 1;
	}
		
	public void StopMetro () {
		photonView.RPC("StopM", PhotonTargets.All);
	}

	[PunRPC]
	public void StopM () {
		GetComponent<AudioSource> ().volume = 0;
	}

}
