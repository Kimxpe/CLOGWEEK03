using UnityEngine;
using System.Collections;

public class ShipShoot : MonoBehaviour {
	public GameObject bullet;

	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.T)) {
			GameObject temp = Instantiate (bullet, transform.position, transform.rotation) as GameObject;
			temp.GetComponent<Rigidbody2D> ().AddForce (Vector3.up);
		}
	}
}
