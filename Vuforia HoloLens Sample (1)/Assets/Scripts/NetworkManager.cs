using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManager : Photon.MonoBehaviour {

	public Text connectText;
	const string VERSION = "v0.0.1";
	public string roomName = "FromBeggining";
	public Transform spawnPoint;
	public Transform spawnPointGuitar;
	public Transform spawnPointWorld;
	public Transform spawnPointStudent;

	public GameObject player;
	public GameObject lobbyCamera;
	public GameObject ARCamera;
	public GameObject TrackingImage;

	public GameObject WORLD;
	public GameObject guitar;
	public bool withCam;
	public bool student;
		
	void Update() {
		connectText.text = PhotonNetwork.connectionStateDetailed.ToString ();
	}

	void Start()
	{
		Debug.Log("connect"); 
		PhotonNetwork.ConnectUsingSettings(VERSION);

		if (student == true) {
			ARCamera.SetActive (true);
			TrackingImage.SetActive (true);
		}
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
		if (!student) {
			PhotonNetwork.Instantiate (player.name,
				spawnPoint.position,
				spawnPoint.rotation,
				0); 
		}

		if (withCam) lobbyCamera.SetActive(true);

		if (WORLD != null) {
			PhotonNetwork.Instantiate (WORLD.name,
				spawnPointWorld.position,
				spawnPointWorld.rotation,
				0); 
		}
		if (guitar != null && !student) {
			PhotonNetwork.Instantiate (guitar.name,
				spawnPointGuitar.position,
				spawnPointGuitar.transform.rotation,
				0);
		}
	}
}
