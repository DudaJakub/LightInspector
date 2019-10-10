using UnityEngine;
using UnityEngine.SceneManagement;


public class Credits : MonoBehaviour {

	public void BackCredits()
    {
        Debug.Log("BackToMenu");
        SceneManager.LoadScene(0);
    }
}
