using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

	public float levelStartDelay = 2f;
	public float turnDelay = .1f;

	public static GameManager instance = null;

	public GameObject player;
	
	public BoardManager boardScript;

	private Text levelText;
	private GameObject levelImage;
	private GameObject restartButton;

	private int level = 1;

	private List<Enemy> enemies;
	private bool enemiesMoving;

	public int playerFoodPoints = 100;

	public static bool restarting = false;
	public static bool newGame = true;
	private bool doingSteup;

	[HideInInspector] public bool playersTurn = true;
	
	
	// Use this for initialization
	void Awake () {
		if (instance == null) {
			instance = this;
		} else if (instance != this) {
			Destroy (gameObject);
		}

		DontDestroyOnLoad (gameObject);
		enemies = new List<Enemy>();
		boardScript = GetComponent<BoardManager>();
		if (restarting == false) {
			InitGame ();
		} 
	}
	
	private void OnLevelWasLoaded(int index)
	{
		if (restarting == false) {
			//If we are simply moving onto the next level within the game
			level++;
		} else {
			//If we are restarting the game, we dont want to increment level
			restarting = false;
		}
		InitGame ();
	}
	
	void InitGame() {
		doingSteup = true;
		levelImage = GameObject.Find ("LevelImage");
		levelText = GameObject.Find ("LevelText").GetComponent<Text> ();
		restartButton = GameObject.Find ("RestartButton");
		restartButton.SetActive (false);
		levelText.fontSize = 32;
		levelText.text = "Day " + level;
		Invoke ("HideLevelImage", levelStartDelay);
		enemies.Clear ();
		boardScript.SetupScene(level);
	}

	private void HideLevelImage()
	{
		levelImage.SetActive (false);
		doingSteup = false;
	}

	public void GameOver() 
	{	
	#if UNITY_STANDALONE || UNITY_WEBPLAYER
		levelText.fontSize = 32;
	#else
		levelText.fontSize = 10;
	#endif
		levelText.text = "After " + level + " days, you starved.";
		levelImage.SetActive(true);
		restartButton.SetActive (true);
		// Disable the game manager??
		enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (playersTurn || enemiesMoving || doingSteup)
			return;
		StartCoroutine (MoveEnemies ());
	}

	public void AddEnemyToList(Enemy script)
	{
		enemies.Add (script);
	}

	IEnumerator MoveEnemies()
	{
		enemiesMoving = true;
		yield return new WaitForSeconds(turnDelay);
		if (enemies.Count == 0) 
		{
			yield return new WaitForSeconds(turnDelay);
		}
		for (int i = 0; i < enemies.Count; i++) 
		{
			enemies[i].MoveEnemy();
			yield return new WaitForSeconds(enemies[i].moveTime);
		}
		playersTurn = true;
		enemiesMoving = false;
	}
}