using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.Windows.Speech;

public class LightUpNotes : MonoBehaviour {

    KeywordRecognizer keywordRecognizer = null;
    Dictionary<string, System.Action> keywords = new Dictionary<string, System.Action>();

    public GameObject[] notas;

	public Color altColor = Color.red;
	private float sec = 3;
	private int lesson;
	public Text playedNote;
	public TextMesh playedNote3D;
	public Text classSpeech;
	public TextMesh classSpeech3D;
	public TextMesh classSpeech3DOnGuitar;
	public GameObject imagenApoyo3D;
	public Image imagenApoyo;
	public Button adelante;
	public Button atras;
	public Button practicar;
	public GameObject adelante3d;
	public GameObject atras3d;
	public GameObject practicar3d;
	public Sprite numeroDedos;
	public Sprite numeroCuerdas;
	public Sprite dedosEnGuitarra;
	public AudioClip[] audios;
	public AudioClip[] escala;
	public GameObject fingers;

	private int speechCount = 0;
	private string[] speechPhrases = { 
		"Comencemos, di la palabra \n'NEXT' para continuar",
		"Primer paso\nAntes que nada, necesitamos conocer \nlos nombres de nuestros dedos y \nlas cuerdas, tambien los trastes.", 
		"En la mano izquierda, tenemos \nDedo indice = 1\nDedo medio = 2\nDedo anular = 3\nDedo meñique = 4",
		"La cuerda mas delgada es la 1,\n y la mas gruesa es la 6.\nLos trastes son los espacios \nque existen entre cada \nparte de metal del diapason\n(o brazo de la guitarra)",
		"Ahora vamos a tomar la guitarra, y vamos a \nconcentrarnos primero en la mano izquierda.",
		"Vamos a tocar con el \ndedo 1 de la mano izquierda, \nla cuerda 1 en el traste numero 1.\nLuego con el dedo 2 vamos a tocar \nel traste numero 2 de la misma cuerda.\nLuego con el dedo 3 el traste 3",
		"Ahora practica! Observa los puntos en tu guitarra, \ndi la palabra 'PLAY' para continuar",
		"Ahora vamos a aprender a tocar una melodia basica, \npuedes repetirla las veces que sea necesario",
		"Practica estrellita! Observa los\n puntos en tu guitarra, \ndi la palabra 'PLAY' para continuar",
		"La lección de hoy ha terminado! \nSigue practicando y vuelve para la leccion #2"
	};

	void Start () {
		classSpeech.text = speechPhrases[speechCount];
		classSpeech3D.text = speechPhrases[speechCount];
		classSpeech3DOnGuitar.text = speechPhrases[speechCount];
		atras.enabled = false;
		atras3d.SetActive(false);
		practicar.enabled = false;
		practicar3d.SetActive (false);
		imagenApoyo.enabled = false;
		imagenApoyo3D.SetActive (false);

		AudioSource audio = GetComponent<AudioSource>();
		audio.clip = audios [0];
		audio.Play();

        keywords.Add("Next", () =>
        {
            if(adelante3d.activeSelf == true)
            {
                NextStep();
            }
        });

		keywords.Add("Ness", () =>
			{
				if(adelante3d.activeSelf == true)
				{
					NextStep();
				}
			});

        keywords.Add("Back", () =>
        {
            if (atras3d.activeSelf == true)
            {
                StepBack();
            }
        });

        keywords.Add("Play", () =>
        {
			if (practicar3d.activeSelf == true)
            {
                StartPlayingGuitar();
            }
        });

		keywords.Add("Plei", () =>
			{
				if (practicar3d.activeSelf == true)
				{
					StartPlayingGuitar();
				}
			});

        // Tell the KeywordRecognizer about our keywords.
        keywordRecognizer = new KeywordRecognizer(keywords.Keys.ToArray());

        // Register a callback for the KeywordRecognizer and start recognizing!
        keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        keywordRecognizer.Start();

    }

	public void StartPlayingGuitar() {
		practicar.enabled = false;
		practicar3d.SetActive (false);
		StartCoroutine(LateCall(0));
	}

	IEnumerator LateCall(int i)
	{
		if (i < notas [lesson].GetComponentsInChildren<Transform> () [0].childCount) {
			yield return new WaitForSeconds (sec);
			if (i > 0) {
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Renderer> ().material.color = Color.white;
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).gameObject.SetActive (false);

				if (notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).name == "Mi" || 
					notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).name == "Si" || 
					notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).name == "Sol") {
					Vector3 scale2 = new Vector3 (0.03f, notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Transform> ().localScale.y, 0.03f);
					notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Transform> ().localScale = scale2;
				} else {
					Vector3 scale2 = new Vector3 (notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Transform> ().localScale.x,
						                0.1f, notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Transform> ().localScale.z);
					notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Transform> ().localScale = scale2;
				}
			}
		
			playedNote.text = "Nota: " + notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name;
			playedNote3D.text = "Nota: " + notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name;
			PlayNoteSound (notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name);
			notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Renderer> ().material.color = altColor;

			if (notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name == "Mi" || 
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name == "Si" || 
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).name == "Sol") {
				Vector3 scale = new Vector3 (0.03f, notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Transform> ().localScale.y, 0.03f);
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Transform> ().localScale = scale;
			} else {
				Vector3 scale = new Vector3 (notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Transform> ().localScale.x,
					               0.1f, notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Transform> ().localScale.z);
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i).GetComponent<Transform> ().localScale = scale;
			}
			i = i + 1;
			StartCoroutine (LateCall (i));
		} else {
			yield return new WaitForSeconds (sec);
			playedNote.text = "Repitelo!";
			playedNote3D.text = "Repitelo!";
			notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (i - 1).GetComponent<Renderer> ().material.color = Color.white;
			yield return new WaitForSeconds (4);
			playedNote.text = "";
			playedNote3D.text = "";
			adelante.enabled = true;
			adelante3d.SetActive (true);
			atras.enabled = true;
			atras3d.SetActive (true);
			practicar.enabled = true;
			practicar3d.SetActive (true);

			for (int n = 0; n < notas [lesson].GetComponentsInChildren<Transform> () [0].childCount; n++) {
				notas [lesson].GetComponentsInChildren<Transform> () [0].GetChild (n).gameObject.SetActive (true);
			}
		}
	}

	public void NextStep (){
		speechCount = speechCount + 1;
		classSpeech.text = speechPhrases [speechCount];
		classSpeech3D.text = speechPhrases [speechCount];
		classSpeech3DOnGuitar.text = speechPhrases [speechCount];
		atras.enabled = true;
		atras3d.SetActive (true);
		checkDidacticElements ();
	}

	public void StepBack (){
		speechCount = speechCount - 1;
		classSpeech.text = speechPhrases [speechCount];
		classSpeech3D.text = speechPhrases [speechCount];
		classSpeech3DOnGuitar.text = speechPhrases [speechCount];
		adelante.enabled = true;
		adelante3d.SetActive (true);
		checkDidacticElements ();
	}

	public void checkDidacticElements () {
		AudioSource audio = GetComponent<AudioSource>();
		audio.clip = audios [speechCount];
		audio.Play();

		if (speechCount > speechPhrases.Length - 1) {
			adelante.enabled = false;
			adelante3d.SetActive (false);
		} else {
			adelante.enabled = true;
			adelante3d.SetActive (true);
		}

		switch (speechCount) {
		case 0: 
			atras.enabled = false;
			atras3d.SetActive (false);
			imagenApoyo.enabled = false;
			imagenApoyo3D.SetActive (false);
			break;
		case 2: 
			imagenApoyo.enabled = true;
			imagenApoyo3D.SetActive (true);
			imagenApoyo.sprite = numeroDedos;
			imagenApoyo3D.GetComponent<SpriteRenderer> ().sprite = numeroDedos;
			break;
		case 3: 
			imagenApoyo.enabled = true;
			imagenApoyo3D.SetActive (true);
			imagenApoyo.sprite = numeroCuerdas;
			imagenApoyo3D.GetComponent<SpriteRenderer> ().sprite = numeroCuerdas;
			break;
		case 4: 
			imagenApoyo.enabled = true;
			imagenApoyo3D.SetActive (true);
			imagenApoyo.sprite = numeroCuerdas;
			imagenApoyo3D.GetComponent<SpriteRenderer> ().sprite = dedosEnGuitarra;
			fingers.SetActive (false);
			break;
		case 6: 
			lesson = 1;
			adelante.enabled = false;
			adelante3d.SetActive (false);
			atras.enabled = false;
			atras3d.SetActive (false);
			notas [lesson].SetActive (true);
			practicar.enabled = true;
			practicar3d.SetActive (true);
			fingers.SetActive (true);
			break;
		case 7:
			practicar.enabled = false;
			practicar3d.SetActive (false);
			notas [lesson].SetActive (false);
			adelante.enabled = true;
			adelante3d.SetActive (true);
			atras.enabled = true;
			atras3d.SetActive (true);
			playedNote.text = "";
			playedNote3D.text = "";
			fingers.SetActive (false);
			break;
		case 8: 
			lesson = 3;
			adelante.enabled = false;
			adelante3d.SetActive (false);
			atras.enabled = false;
			atras3d.SetActive (false);
			notas [lesson].SetActive (true);
			practicar.enabled = true;
			practicar3d.SetActive (true);
			fingers.SetActive (true);
			break;
		case 9:
			adelante.enabled = false;
			adelante3d.SetActive (false);
			atras.enabled = false;
			atras3d.SetActive (false);
			notas [lesson].SetActive (false);
			practicar.enabled = false;
			practicar3d.SetActive (false);
			fingers.SetActive (false);
			break;
		default: 
			imagenApoyo.enabled = false;
			imagenApoyo3D.SetActive (false);
			practicar.enabled = false;
			practicar3d.SetActive (false);
			notas [lesson].SetActive (false);
			break;
		}
	}

    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }

	private void PlayNoteSound (string name) {
		AudioSource audio = GetComponent<AudioSource>();
		switch (name) {
		case "Do": 
			audio.clip = escala [0];
			break;
		case "Re": 
			audio.clip = escala [1];
			break;
		case "Mi": 
			audio.clip = escala [2];
			break;
		case "Fa": 
			audio.clip = escala [3];
			break;
		case "Fa#": 
			audio.clip = escala [4];
			break;
		case "Sol": 
		case "Sol.":
			audio.clip = escala [5];
			break;
		case "Sol#": 
			audio.clip = escala [6];
			break;
		case "La": 
			audio.clip = escala [7];
			break;
		case "Si": 
			audio.clip = escala [8];
			break;
		case "DO": 
			audio.clip = escala [9];
			break;
		}
		audio.Play();
	}
}
