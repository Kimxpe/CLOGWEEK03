using UnityEngine;
using System.Collections;

public class KillOtherCollisionPhysics : MonoBehaviour {
	void OnCollisionEnter (Collision otherobject) {
			Destroy(otherobject.gameObject);
	//void OnCollisionEnter (Collider otherobject) {
	//	Destroy (otherobject);
	//	Debug.Log ("Destroyed!");
	}

}