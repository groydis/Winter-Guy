﻿using UnityEngine;
using System.Collections;

public class Loader : MonoBehaviour {

	public GameObject gameManager;
	public GameObject gameManagerToDestory;

	// Use this for initialization
	void Awake () {
		if (GameManager.instance == null) {
			Instantiate(gameManager);
		}
		gameManagerToDestory = GameObject.FindGameObjectWithTag ("GameController");
	}

	public void Restart(int sceneToLoad) {
		DestroyObject (gameManagerToDestory);
		Application.LoadLevel (sceneToLoad);
		SoundManager.instance.musicSource.Play ();
		GameManager.restarting = true;

	}
}
