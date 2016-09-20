using UnityEngine;
using System.Collections;

public class SpawnKill : MonoBehaviour {

	public GameObject enemy1;

	void Start (){
		StartCoroutine ("waitSeconds");
		GameObject temp = Instantiate (enemy1, transform.position, transform.rotation) as GameObject;
		temp.GetComponent<Rigidbody2D> ();

	}

	IEnumerator waitSeconds() {
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (3);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
	
	}

}

