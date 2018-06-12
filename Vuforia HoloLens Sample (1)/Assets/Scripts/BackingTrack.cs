using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BackingTrack : MonoBehaviour {

	public Text btText;
	PhotonView photonView;

	void Start() {
		btText = GameObject.Find ("BackingTrackText").GetComponent<Text>();
		btText.text = "Not playing";
		photonView = PhotonView.Get (this);
	}

	public void PlayBackingTrack () {
		photonView.RPC("PlayBackingT", PhotonTargets.All);
	}

	[PunRPC]
	public void PlayBackingT () {
		GetComponent<AudioSource>().Play();
		btText.text = "Playing";
	}

	public void StopBackingTrack () {
		photonView.RPC("StopBackingT", PhotonTargets.All);
	}

	[PunRPC]
	public void StopBackingT () {
		GetComponent<AudioSource>().Stop();
		btText.text = "Not playing";
	}

	public void PauseBackingTrack () {
		photonView.RPC("PauseBackingT", PhotonTargets.All);
	}

	[PunRPC]
	public void PauseBackingT () {
		GetComponent<AudioSource>().Pause();
		btText.text = "Paused";
	}
}
