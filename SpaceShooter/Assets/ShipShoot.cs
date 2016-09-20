using UnityEngine;
using System.Collections;

public class ShipShoot : MonoBehaviour {
	public GameObject bullet;

	private bool canFire = true;
	public float rateOfFire = .5f;

	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.R) &&canFire ==true) {
			canFire = false;
			StartCoroutine ("reload");
			GameObject temp = Instantiate (bullet, transform.position, transform.rotation) as GameObject;
			temp.GetComponent<Rigidbody2D> ().AddForce (temp.transform.forward*100);
		}
	}

	IEnumerator reload () {
		yield return new WaitForSeconds (rateOfFire);
		canFire = true;
	}

}
