using UnityEngine;
using System.Collections;

public class KillOtherObject : MonoBehaviour {


	void OnTriggerEnter () {
		Destroy (gameObject);
	
		//void OnTriggerExit (Collider otherObject) {
		//Destroy (otherObject);
		Debug.Log ("thing moving out of trigger");
	
	}

}
