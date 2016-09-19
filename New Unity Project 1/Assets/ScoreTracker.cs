using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreTracker : MonoBehaviour {

	int score = 0;
	Text scoreText;

	void Start () {
		scoreText = GetComponent<Text> ();
		scoreText.text = "SCORE: " + score;
	}

	public void addScore (int pointsToAdd) {
		score = score + pointsToAdd; //shortcut is simply score += pointsToAdd;
		scoreText.text = "SCORE: " + score;
	
	}
}
