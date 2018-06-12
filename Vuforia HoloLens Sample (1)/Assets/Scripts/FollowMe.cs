using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowMe : MonoBehaviour {

	public Transform other;
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		transform.LookAt (other.transform);
		transform.position = new Vector3 (transform.position.x, other.position.y, transform.position.z);

		if((Mathf.Sqrt(Mathf.Pow(transform.position.x - other.position.x, 2) + Mathf.Pow(transform.position.z - other.position.z, 2))) > 15.0)
			transform.position = Vector3.Lerp (transform.position, other.position, 0.01f);
	}
}  
