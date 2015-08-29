using UnityEngine;
using System.Collections;

public class Enemy : MovingObject {

	public int playerDamage;


	private Animator animator;
	private Transform target;
	private bool skipMove;

	public AudioClip enemyAttack1;
	public AudioClip enemyAttack2;

	private Camera mainCamera;
	private CameraScript camScript;

	
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

	protected override void OnCantMove <T> (T component)
	{
		Player hitPlayer = component as Player;
		animator.SetTrigger ("enemyAttack");
		camScript.ShakeCamera (0.1f, 0.2f);
		SoundManager.instance.RandomizeSfx(enemyAttack1, enemyAttack2);
		hitPlayer.LoseFood(playerDamage);
		hitPlayer.InitCBT ("-" + playerDamage.ToString());
	}
}

