using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TabNotes : MonoBehaviour {

	PhotonView photonView;
	public GameObject note;

	void Start () {
		photonView = PhotonView.Get (this);
	}

	void OnMouseDown()
	{
		photonView.RPC("ShowNoteRemote", PhotonTargets.All);
	}

	void OnMouseUp()
	{
		photonView.RPC("HideNoteRemote", PhotonTargets.All);
	}

	[PunRPC]
	public void ShowNoteRemote () {
		note.SetActive (true);
		note.GetComponent<Renderer> ().material.color = Color.red;
		GetComponent<MeshRenderer> ().enabled = true;
	}

	[PunRPC]
	public void HideNoteRemote () {
		note.SetActive (false);
		note.GetComponent<Renderer> ().material.color = Color.white;
		GetComponent<MeshRenderer> ().enabled = false;
	}
}
