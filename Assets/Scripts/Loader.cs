using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Loader : MonoBehaviour {

	public GameObject gameManager;
	public GameObject gameManagerToDestory;
	
	public GameObject settingsUI;

	public AudioSource mSource;
	public AudioSource sSource;

	public GameObject musicSlider;

	public GameObject sfxSlider;


	// Use this for initialization
	void Awake () {
		if (GameManager.instance == null) {
			Instantiate(gameManager);
		}
		gameManagerToDestory = GameObject.FindGameObjectWithTag ("GameController");
		mSource = GameObject.FindGameObjectWithTag ("Music").GetComponentInChildren<AudioSource>();
		sSource = GameObject.FindGameObjectWithTag ("SFX").GetComponentInChildren<AudioSource>();

	}

	public void Restart(int sceneToLoad) {
		DestroyObject (gameManagerToDestory);
		Application.LoadLevel (sceneToLoad);
		SoundManager.instance.musicSource.Play ();
		GameManager.restarting = true;

	}

	public void ShowHighScore() {
	
	}

	public void Share() {

	}

	public void ShowSettings() {
		settingsUI.SetActive (true);
	}

	public void HideSettings() {
		settingsUI.SetActive (false);

	}

	public void SetMusicVolume(float value)
	{
		PlayerPrefs.SetFloat("Music-Volume", value);
		mSource.volume = value;
	}

	public void SetSFXVolume(float value)
	{
		PlayerPrefs.SetFloat("SFX-Volume", value);
		sSource.volume = value;
	}
}
