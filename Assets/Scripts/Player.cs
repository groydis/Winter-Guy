using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Player : MovingObject {

	public int wallDamage = 1;
	public int pointsPerFood = 10;
	public int pointsPerDrink = 20;
	public Text foodText;
	public float restartLevelDelay = 1f;
	public float textFadeTime;

	public AudioClip moveSound1;
	public AudioClip moveSound2;
	public AudioClip eatSound1;
	public AudioClip eatSound2;
	public AudioClip drinkSound1;
	public AudioClip drinkSound2;
	public AudioClip gameOverSound;
	
	private Animator animator;
	private bool facingRight = true;
	public int food;
	
	public bool isCrit = false;


	private Vector2 touchOrigin = -Vector2.one;


	// Use this for initialization
	protected override void Start () 
	{
		animator = GetComponent<Animator> ();
		food = GameManager.instance.playerFoodPoints;

		foodText.text = food.ToString();


		base.Start ();
	}

	private void OnDisable()
	{
		GameManager.instance.playerFoodPoints = food;
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (!GameManager.instance.playersTurn) {
			return;
		}

		int horizontal = 0;
		int vertical = 0;

	#if UNITY_EDITOR || UNITY_STANDALONE || UNITY_WEBPLAYER
	
		horizontal = (int)Input.GetAxisRaw ("Horizontal");
		vertical = (int)Input.GetAxisRaw ("Vertical");

		if (horizontal != 0) {
			vertical = 0;
		} 

	#else

		if(Input.touchCount > 0)
		{
			Touch myTouch = Input.touches[0];
			if (myTouch.phase == TouchPhase.Began)
			{
				touchOrigin = myTouch.position;
			}
			else if (myTouch.phase == TouchPhase.Ended && touchOrigin.x >= 0)
			{
				Vector2 touchEnd = myTouch.position;
				float x = touchEnd.x - touchOrigin.x;
				float y = touchEnd.y - touchOrigin.y;
				touchOrigin.x =- 1;
				if (Mathf.Abs(x) > Mathf.Abs(y))
					horizontal = x > 0 ? 1 : -1;
				else 
					vertical = y > 0 ? 1 : -1;
			}
		}

	#endif

		if (horizontal != 0 || vertical != 0) {
			AttemptMove<Wall> (horizontal, vertical);
		}

		if (horizontal == 1) {
			if (!facingRight) {
				Flip();
			}

		} else if (horizontal == -1) {
			if (facingRight) {
				Flip();
			}
		}
	}

	protected override void AttemptMove<T> (int xDir, int yDir)
	{
		food--;
		foodText.text = food.ToString();
		// Currently not working, either animation broken or wrong place to start animation.
		animator.SetTrigger ("playerMove");
		base.AttemptMove<T>(xDir,yDir);

		RaycastHit2D hit;
		if (Move (xDir, yDir, out hit))
		{
			SoundManager.instance.RandomizeSfx(moveSound1, moveSound2);
		}
		CheckIfGameOver();

		GameManager.instance.playersTurn = false;
	}

	private void OnTriggerEnter2D (Collider2D other) 
	{
		if (other.tag == "Exit") {
			Invoke ("Restart", restartLevelDelay);
			enabled = false;
		} else if (other.tag == "Food") {;
			pointsPerFood = other.transform.GetComponent<PickUp>().foodValue;
			animator.SetTrigger("playerSearch");
			food += pointsPerFood;
			GameManager.totalFood += pointsPerFood;
			foodText.text = food.ToString();
			if (pointsPerFood > 10 )
			{
				isCrit = true;
			}
			CombatTextManager.Instance.CreateCombatText(transform.position, "+" + pointsPerFood, Color.green, isCrit);
			SoundManager.instance.RandomizeSfx(eatSound1, eatSound2);
			other.gameObject.SetActive (false);
			isCrit = false;
		} else if (other.tag == "Drink") {
			animator.SetTrigger("playerSearch");
			pointsPerDrink = other.transform.GetComponent<PickUp>().foodValue;
			food += pointsPerDrink;
			GameManager.totalFood += pointsPerDrink;
			foodText.text = food.ToString();
			if (pointsPerDrink > 10 )
			{
				isCrit = true;
			}
			CombatTextManager.Instance.CreateCombatText(transform.position, "+" + pointsPerDrink, Color.green, isCrit);
			SoundManager.instance.RandomizeSfx(drinkSound1, drinkSound2);
			other.gameObject.SetActive (false);
			isCrit = false;
		}
	}

	protected override void OnCantMove <T> (T component)
	{
		Wall hitWall = component as Wall;
		hitWall.DamageWall (wallDamage);
		animator.SetTrigger ("playerChop");
	}

	private void Restart() 
	{
		Application.LoadLevel (Application.loadedLevel);
	}

	public void LoseFood (int loss)
	{
		animator.SetTrigger ("playerHit");
		food -= loss;
		foodText.text = food.ToString();
		CheckIfGameOver ();
	}

	private void CheckIfGameOver()
	{
		if (food <= 0) 
		{
			SoundManager.instance.PlaySingle (gameOverSound);
			SoundManager.instance.musicSource.Stop ();
			GameManager.instance.GameOver ();
		}
	}
	void Flip()
	{
		// Switch the way the player is labelled as facing
		facingRight = !facingRight;
		
		// Multiply the player's x local scale by -1
		Vector3 theScale = transform.localScale;
		theScale.x *= -1;
		transform.localScale = theScale;
	}

	private IEnumerator PickUpItem(float length, GameObject other) 
	{
		animator.SetTrigger("playerSearch");
		yield return new WaitForSeconds(length);
		food += pointsPerFood;
		GameManager.totalFood += pointsPerFood;
		foodText.text = food.ToString();
		if (pointsPerFood > 10 )
		{
			isCrit = true;
		}
		CombatTextManager.Instance.CreateCombatText(transform.position, "+" + pointsPerFood, Color.green, isCrit);
		SoundManager.instance.RandomizeSfx(eatSound1, eatSound2);
		other.gameObject.SetActive (false);
		isCrit = false;
	}
}
