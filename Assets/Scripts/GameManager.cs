using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

	public float levelStartDelay = 2f;
	public float turnDelay = .5f;

	public static GameManager instance = null;

	public GameObject player;
	
	public BoardManager boardScript;

	private Text levelText;
	private Text deathText;
	private Text highScoreText;
	private GameObject levelImage;
	private GameObject buttons;
	private GameObject gameUI;



	private int level = 1;

	private List<Enemy> enemies;
	private bool enemiesMoving;

	public int playerFoodPoints = 100;

	public static bool restarting = false;
	public static bool newGame = true;
	private bool doingSteup;

	public static int totalFood;
	private string[] celebration = {
		"Ridgie Didge!",
		"You Bloody Ripper!",
		"Fair Dinkum!",
		"Flat Out!",
		"Going Off!",
		"Bonzer Mate!",
		"Dinky Di!",
		"It's a Goer!",
		"True Blue!",
		"You Beauty!"
	};

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
		StartCoroutine (CelebrationTextDisplay ());
		gameUI.SetActive (true);
	}
	
	void InitGame() {
		doingSteup = true;
		levelImage = GameObject.Find ("LevelImage");
		levelText = GameObject.Find ("LevelText").GetComponent<Text> ();
		highScoreText = GameObject.Find ("HighScoreText").GetComponent<Text> ();
		highScoreText.text = "";
		buttons = GameObject.Find ("Buttons");
		gameUI = GameObject.Find ("GameUI");
		buttons.SetActive (false);
		gameUI.SetActive (false);
		levelText.fontSize = 100;
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
		//levelText.fontSize = 32;
	#else
		//levelText.fontSize = 10;
	#endif
		levelText.fontSize = 50;
		string[] gameOverText = {
			"After " + level + " days, you starved."
		};
		levelText.text = gameOverText[Random.Range(0, gameOverText.Length)];
		gameUI.SetActive (false);
		levelImage.SetActive(true);
		buttons.SetActive (true);
		// Set High Score and Total Food Consumed
		int highScore = PlayerPrefs.GetInt ("High Score");
		int totalFoodConsumed = PlayerPrefs.GetInt ("Total Food Consumed");
		if (level > highScore) {
			highScoreText.text = "New High Score!";
			PlayerPrefs.SetInt ("High Score", level);
		}
		PlayerPrefs.SetInt ("Total Food Consumed", totalFoodConsumed + totalFood + 100); 
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

	IEnumerator CelebrationTextDisplay()
	{
		yield return new WaitForSeconds(levelStartDelay);
		CombatTextManager.Instance.CreateCelebrationText (celebration[Random.Range (0, celebration.Length)], Color.white);
	}
}