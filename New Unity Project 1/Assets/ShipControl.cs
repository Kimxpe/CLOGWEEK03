using UnityEngine;
using System.Collections;

public class ShipControl : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
		StartCoroutine ("wait2Seconds");
		Debug.Log ("print"); //Debug shows how they work
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	//Coroutine looked up to get it right creating the top one in the wiki
	//when adding decimal must add "f" after so it determines its a float and doesn't give error

	IEnumerator wait2Seconds() {
		Debug.Log ("print 1");
		yield return new WaitForSeconds (2); //can add more than one, duh.
	
		Debug.Log ("print 2");
	}


}
//for things like have text appear after killing something. 
//deals with things later.
