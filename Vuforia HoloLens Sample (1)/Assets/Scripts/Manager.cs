using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Manager : Photon.MonoBehaviour {

	public Text connectText;
	const string VERSION = "v0.0.1";
	public string roomName = "FromBeggining";
	public Transform spawnPoint;

	public GameObject player;
	public GameObject lobbyCamera;
		
	void Update() {
		connectText.text = PhotonNetwork.connectionStateDetailed.ToString ();
	}

	void Start()
	{
		Debug.Log("connect"); 
		PhotonNetwork.ConnectUsingSettings(VERSION);
	}

	public virtual void OnConnectedToMaster()
	{
		Debug.Log("We are now connected to master"); 
	}

	public virtual void OnJoinedLobby()
	{
		Debug.Log("We are now connected to lobby");  
		PhotonNetwork.JoinOrCreateRoom(roomName, null, null);
	}

	public virtual void OnJoinedRoom () 
	{
		PhotonNetwork.Instantiate (player.name,
			spawnPoint.position,
			spawnPoint.rotation,
			0); 
		lobbyCamera.SetActive(false);
	}
}