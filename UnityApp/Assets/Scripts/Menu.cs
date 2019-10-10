using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour {

    public void Quit()
    {
        Debug.Log("QUIT");
        Application.Quit();
    }

    public void StartProgramme()
    {
        Debug.Log("START");
        SceneManager.LoadScene(2);
    }

    public void Credits()
    {
        Debug.Log("Credits");
        SceneManager.LoadScene(1);
    }

}
