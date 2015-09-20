using UnityEngine;
using System.Collections;

public class Enemy : MovingObject {

	public int playerDamage;

	private string[] nounWord = {
		"Bastard",
		"Bludger",
		"Bogan",
		"Yobbo",
		"Ratbag",
		"Wanker",
		"Polly",
		"Clacker",
		"Bunyip",
		"Cockie",
		"Dipstick",
		"Dero",
		"Dickhead",
		"Dill",
		"Donger",
		"Drongo",
		"Dropkick",
		"Feral",
		"Franger",
		"Fruit-Loop",
		"Mongrel",
		"Ocker",
		"Perve",
		"Piker",
		"Root-Rat",
		"Wuss",
		"Larrikin",
		"Dag",
		"Tosser",
		"Whinger",
		"Wombat",
		"Cockroach",
		"Sponger",
		"Boofhead",
		"Galah",
		"Ranga",
		"Sook"
	};

	private string[] adjectiveWord = {
		"Bloody",
		"Bastardy",
		"Bodgie",
		"Shonky",
		"Dodgie",
		"Rotten",
		"Porky",
		"Chokkie",
		"Bushie",
		"Cocky",
		"Dirty",
		"Shonky",
		"Sooky",
		"Farkin",
		"Bodgy",
		"Cheeky",
		"Gutless",
		"Stingy",
		"Narkie",
		"Paralytic",
		"Shirty",
		"Snaily",
		"Alky",
		"Crooked",
		"Grotty",
		"Lofty",
		"Mangy",
		"Nuggetty",
		"Rudy",
		"Rotten",
		"Rooted",
		"Skiting",
		"Sponging",
		"Stubby",
		"Suss",
		"Wonky",
		"Whingy"
	};
	
	private Animator animator;
	private Transform target;
	private bool skipMove;

	public float textFadeTime;

	public AudioClip enemyAttack1;
	public AudioClip enemyAttack2;

	private Camera mainCamera;
	private CameraScript camScript;

	private bool isCrit = false;

	
	protected override void Start () 
	{
		mainCamera = Camera.main;
		camScript = mainCamera.GetComponent<CameraScript>();
		GameManager.instance.AddEnemyToList (this);
		animator = GetComponent<Animator> ();
		target = GameObject.FindGameObjectWithTag ("Player").transform;
		base.Start ();
	}

	protected override void AttemptMove <T> (int xDir, int yDir)
	{
		if (skipMove) 
		{
			skipMove = false;
			return;
		}

		base.AttemptMove<T> (xDir, yDir);
		skipMove = true;
	}

	public void MoveEnemy() 
	{
		int xDir = 0;
		int yDir = 0;

		if (Mathf.Abs (target.position.x - transform.position.x) < float.Epsilon)
			yDir = target.position.y > transform.position.y ? 1 : -1;
		else 
			xDir = target.position.x > transform.position.x ? 1 : -1;

		AttemptMove <Player> (xDir, yDir);
	}

	public void Talk(int magicNumber) {
		if (magicNumber == 5) {
			CombatTextManager.Instance.CreateCombatText (transform.position, adjectiveWord [Random.Range (0, adjectiveWord.Length)] + " " + adjectiveWord [Random.Range (0, adjectiveWord.Length)] + " " + nounWord [Random.Range (0, nounWord.Length)] + "!", Color.white, true);
		} else {
			CombatTextManager.Instance.CreateCombatText(transform.position, "You" + " " + adjectiveWord[Random.Range(0, adjectiveWord.Length)] + " " + nounWord[Random.Range(0, nounWord.Length)] + "!", Color.white, true);
		}
	}

	protected override void OnCantMove <T> (T component)
	{
		Player hitPlayer = component as Player;
		animator.SetTrigger ("enemyAttack");
		int magicNumber = Random.Range (0, 10);
		Talk (magicNumber);
		camScript.ShakeCamera (0.1f, 0.2f);
		SoundManager.instance.RandomizeSfx(enemyAttack1, enemyAttack2);
		hitPlayer.LoseFood(playerDamage);
		if (playerDamage > 10) 
		{
			isCrit = true;
		}
		CombatTextManager.Instance.CreateCombatText(hitPlayer.transform.position, "-" + playerDamage, Color.red, isCrit);
		isCrit = false;
	}
}

