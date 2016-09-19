using UnityEngine;
using System.Collections;

public class SpawnBullet : MonoBehaviour {

	public GameObject bullet;

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.R)) {
			Debug.Log ("Kill Em! Woo!");
			Instantiate (bullet);
		}
	}
}
