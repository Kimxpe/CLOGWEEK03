using UnityEngine;
using System.Collections;

public class ShipShoot : MonoBehaviour {

	public GameObject bullet;
	private bool canFire = true;

	public float rateOfFire = .5f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {													//remember two equal signs, will be on quiz
		if (Input.GetKey (KeyCode.T) &&canFire == true) {      			//Using a variable to limit the rate of fire instead of fire 60 bullets per sec when holding down key.
			canFire = false;
			StartCoroutine ("reload");
			GameObject temp = Instantiate (bullet, transform.position,transform.rotation) as GameObject;
			temp.GetComponent<Rigidbody> ().AddForce (Vector3.up * 1000); 
		
		}
	}
	IEnumerator reload() {
		yield return new WaitForSeconds ( rateOfFire );
			canFire = true;
	
	}
}
