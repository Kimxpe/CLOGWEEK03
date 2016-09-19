using UnityEngine;
using System.Collections;

public class Shoot : MonoBehaviour {

	public Rigidbody bullet;

	public float speed = 20;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKey (KeyCode.R)) {
			Rigidbody instantiatedBullet = Instantiate (bullet, transform.position, transform.rotation) as Rigidbody;
			instantiatedBullet.velocity = transform.TransformDirection (new Vector3(0,0,speed));
		}
	}
}
