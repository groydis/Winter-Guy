using UnityEngine;
using System.Collections;

public class Menu : MonoBehaviour {

	public void StartGame(int scene) {
		Application.LoadLevel (scene);
		GameManager.restarting = true;
	}

	public void ShowHighScore() {
		
	}
}
