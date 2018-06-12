using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonBehavior : MonoBehaviour {

	public TextMesh button;
	public float timeLeft = 2;
	public float t = 0;
	
	void OnCollisionStay (Collision col) {
		if (col.gameObject.name == "click" ) {
			button.color = Color.Lerp (Color.white, Color.red, t);
			if (t < 1) {
				t += Time.deltaTime / 2f;
			} else {
				button.color = Color.white;
				t = 0;
			}
		}
	}

	void OnCollisionExit (Collision col) {
		if (col.gameObject.name == "click") {
			button.color = Color.white;
			t = 0;
		}
	}
}
