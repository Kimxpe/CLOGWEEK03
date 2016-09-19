using UnityEngine;
using System.Collections;

public class enemyHitDetection : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void OnTriggerEnter (Collider other) {
		Destroy (other.gameObject); //destroy bullet

		//get score object and add score
		//Note: this is a more cyclomatic complex way of doing this command

		GameObject scoreH = GameObject.Find("SCOREHOLDER");
		scoreH.GetComponent<ScoreTracker> ().addScore (5903);

		Destroy (gameObject); //destroy self
	}
}

