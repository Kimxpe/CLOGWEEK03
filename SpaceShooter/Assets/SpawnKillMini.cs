using UnityEngine;
using System.Collections;

public class SpawnKillMini : MonoBehaviour {

	public GameObject enemy1;

	void Start (){
		StartCoroutine ("waitSeconds");
		Instantiate (enemy1, transform.position, transform.rotation);
	}

	IEnumerator waitSeconds() {
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.3f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.5f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.6f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.8f);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (1);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (2);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (.2f);
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
