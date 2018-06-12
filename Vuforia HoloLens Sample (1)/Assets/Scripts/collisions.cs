using UnityEngine;
using System.Collections;

public class collisions : MonoBehaviour
{
	public LightUpNotes script;
	public float timeLeft = 2;
	public bool alreadyEnter = false;
	public Sprite cursor;
	public Sprite arrow;
	private Transform next;

	void OnStart () {
		GetComponent<SpriteRenderer> ().sprite = arrow;
	}

	void Update () {
		if (script == null) {
			print (GameObject.Find ("ClassSec").GetComponent<LightUpNotes> () + "------------------");
			script = GameObject.Find ("ClassSec").GetComponent<LightUpNotes> ();
		}
		if (next == null) next = GameObject.Find ("next").transform;
		Vector3 diff = next.transform.position - transform.position;
		diff.Normalize ();

		float rot_z = Mathf.Atan2 (diff.y, diff.x) * Mathf.Rad2Deg;
		transform.rotation = Quaternion.Euler (0f, 0f, rot_z - 90);
	}

	void OnCollisionStay (Collision col) {
		if ((col.gameObject.name == "next" || col.gameObject.name == "back" || col.gameObject.name == "play") && !alreadyEnter) {
			timeLeft -= Time.deltaTime;
			GetComponent<SpriteRenderer> ().sprite = cursor;
			GetComponent<SpriteRenderer> ().color = Color.white;
			if (timeLeft < 0) {
				alreadyEnter = true;
				if (col.gameObject.name == "next") {
					script.NextStep ();
				}
				if (col.gameObject.name == "back") {
					script.StepBack ();
				}
				if (col.gameObject.name == "play") {
					script.StartPlayingGuitar ();
				}
				GetComponent<SpriteRenderer> ().sprite = arrow;
			}
		} else {
			alreadyEnter = false;
			timeLeft = 2;
			GetComponent<SpriteRenderer> ().sprite = arrow;
		}
	}

	void OnCollisionExit (Collision col) {
		if (col.gameObject.name == "next") {
			timeLeft = 2;
			alreadyEnter = false;
			GetComponent<SpriteRenderer> ().sprite = arrow; 
		}
	}

}

