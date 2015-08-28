using UnityEngine;
using System.Collections;

public class CameraScript : MonoBehaviour {

	public float shakeTimer;
	public float shakeAmount;
	private Vector3 camPos;

	
	void Awake () {
		camPos = new Vector3 (transform.position.x, transform.position.y, transform.position.z);
	}
	
	// Update is called once per frame
	void Update () {
		if (shakeTimer >= 0) {
			Vector2 shakePos = Random.insideUnitCircle * shakeAmount;

			transform.position = new Vector3 (transform.position.x + shakePos.x, transform.position.y + shakePos.y, transform.position.z);

			shakeTimer -= Time.deltaTime;
		} else {
			transform.position = camPos;
		}
	}

	public void ShakeCamera(float shakePwr, float shakeDur) 
	{
		shakeAmount = shakePwr;
		shakeTimer = shakeDur;
	}

}
