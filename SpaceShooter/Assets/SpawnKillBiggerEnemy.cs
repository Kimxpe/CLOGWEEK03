using UnityEngine;
using System.Collections;

public class SpawnKillBiggerEnemy : MonoBehaviour {

	public GameObject enemy2;

	void Start (){
//		StartCoroutine ("waitSeconds");
//		Instantiate (enemy2, transform.position, transform.rotation);
		InvokeRepeating("SpawnEnemy", 0f, 3f);
	}

	void SpawnEnemy() {
		Instantiate (enemy2, transform.position, transform.rotation);
	}

	IEnumerator waitSeconds() {
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (7);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (9);
		Instantiate (enemy2, transform.position, transform.rotation);
		yield return new WaitForSeconds (6);
		Instantiate (enemy2, transform.position, transform.rotation);

	}


}
