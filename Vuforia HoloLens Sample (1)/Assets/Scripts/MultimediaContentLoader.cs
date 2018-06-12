using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MultimediaContentLoader : MonoBehaviour {

	string url = "";//"https://www.uberchord.com/wp-content/uploads/2016/06/A-Minor-Pentatonic-Scale-1st-Position-e1466584881511.jpg";
	Texture2D img;
	public InputField inputField; 
	PhotonView photonView;

	void Start () {
		//StartCoroutine (LoadImg());	
		photonView = PhotonView.Get (this);
	}

	IEnumerator LoadImg () {
		yield return 0;
		WWW imgLink = new WWW (url);
		yield return imgLink;
		img = imgLink.texture;

		imgLink.LoadImageIntoTexture(img);
		Rect rec = new Rect (0, 0, img.width, img.height);
		Sprite spriteToUse = Sprite.Create (img, rec, new Vector2 (0.5f, 0.5f), 100);
		GetComponent<SpriteRenderer> ().sprite = spriteToUse;

		imgLink.Dispose ();
		imgLink = null;
	}

	public void onEndEdit (string str){
		photonView.RPC("onEndEditRemote", PhotonTargets.All, inputField.text);
	}

	[PunRPC]
	public void onEndEditRemote (string str) {
		url = str;
		StartCoroutine (LoadImg());
	}
}
