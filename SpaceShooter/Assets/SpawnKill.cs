using UnityEngine;
using System.Collections;

public class SpawnKill : MonoBehaviour {

	public GameObject enemy1;
	void Start (){
		//		StartCoroutine ("waitSeconds");
		//		Instantiate (enemy2, transform.position, transform.rotation);
		InvokeRepeating("SpawnEnemy", 0f, 3f);
	}

	void SpawnEnemy() {
		Instantiate (enemy1, transform.position, transform.rotation);
	}

	IEnumerator waitSeconds() {
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy1, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy1, transform.position, transform.rotation);

	}


}

