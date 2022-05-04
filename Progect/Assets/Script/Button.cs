using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class Button : MonoBehaviour
{
    static int _lastSceneIndex = 1;

    public static void GoToNextScene(int _scenemenager)
    {
        _lastSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(_scenemenager);
    }

    public void Return()
    {
        InvokeRepeating("ReturnToLastScene", 0.5f, 0);
    }

    void ReturnToLastScene()
    {
        SceneManager.LoadScene(_lastSceneIndex);
    }

    public void RoloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void GoBackSceneIndex(int _sceneindex)
    {
        SceneManager.LoadScene(_sceneindex);
    }

    public void url(string _openurl)
    {
        Application.OpenURL(_openurl);
    }

    public void quit()
    {
        Application.Quit();
    }
}
