using UnityEngine;
using System.Collections;

public class Wall : MonoBehaviour {

	public Sprite dmgSprite;
	public int hp = 4;
	public AudioClip chopSound1;
	public AudioClip chopSound2;
	public AudioClip wallDestroySound1;
	public AudioClip wallDestorySound2;

	private Camera mainCamera;
	private CameraScript camScript;
	private SpriteRenderer spriteRenderer;

	// Use this for initialization
	void Awake () {
		mainCamera = Camera.main;
		camScript = mainCamera.GetComponent<CameraScript>();
		spriteRenderer = GetComponent<SpriteRenderer> ();
	}

	public void DamageWall (int loss)
	{
		SoundManager.instance.RandomizeSfx(chopSound1, chopSound2);
		spriteRenderer.sprite = dmgSprite;
		hp -= loss;
		if (hp <= 0) {
			camScript.ShakeCamera (0.1f, 0.1f);
			SoundManager.instance.RandomizeSfx (wallDestroySound1, wallDestorySound2);
			gameObject.SetActive (false);
		}
	}
}
