using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CombatTextManager : MonoBehaviour {

	private static CombatTextManager instance;

	public GameObject combatTextPrefab;
	public GameObject celebrationTextPrefab;

	public RectTransform canvasTransform;

	public float speed;
	public Vector3 direction; 
	public float fadeTime;

	public static CombatTextManager Instance
	{
		get 
		{
			if (instance == null)
			{
				instance = GameObject.FindObjectOfType<CombatTextManager>();
			}
			return instance;
		}
	}

	public void CreateCombatText(Vector3 position, string text, Color color, bool crit)
	{
		GameObject sct = (GameObject)Instantiate (combatTextPrefab, position, Quaternion.identity);
		sct.transform.SetParent (canvasTransform);
		sct.GetComponent<RectTransform> ().localScale = new Vector3 (1, 1, 1);
		sct.GetComponent<CombatText> ().Initialize (speed, direction, fadeTime, crit);
		sct.GetComponent<Text>().text = text;
		sct.GetComponent<Text> ().color = color;
	}

	public void CreateCelebrationText(string text, Color color)
	{
		GameObject sct = (GameObject)Instantiate (celebrationTextPrefab, new Vector3(0,0,0), Quaternion.identity);
		sct.transform.SetParent (canvasTransform);
		sct.GetComponent<RectTransform> ().localPosition = new Vector3 (0, 0, 0);
		sct.GetComponent<RectTransform> ().localScale = new Vector3 (1, 1, 1);
		sct.GetComponent<CelebrationText> ().Initialize (speed, direction, fadeTime);
		sct.GetComponent<Text>().text = text;
		sct.GetComponent<Text> ().color = color;
	}
	
}
