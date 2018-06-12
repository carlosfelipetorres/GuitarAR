using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManageAnimations : MonoBehaviour {

	public Animator anim;
	public GameObject guitar;
	PhotonView photonView;

	void Start() {
		photonView = PhotonView.Get (this);
	}

	public void StartHelloAnimation() {
		photonView.RPC("StartHelloRemote", PhotonTargets.All);
	}

	[PunRPC]
	public void StartHelloRemote () {
		anim.SetTrigger ("sayHello");
		guitar.SetActive (false);
	}

	public void PlayPentatonicAnimation() {
		photonView.RPC("PlayPentatonicRemote", PhotonTargets.All);
	}

	[PunRPC]
	public void PlayPentatonicRemote () {
		anim.SetTrigger ("playPentatonic");
		guitar.SetActive (true);
	}

	public void PlayExercicesAnimation() {
		photonView.RPC("PlayExercicesRemote", PhotonTargets.All);
	}

	[PunRPC]
	public void PlayExercicesRemote () {
		anim.SetTrigger ("playExercices");
		guitar.SetActive (false);
	}
}
