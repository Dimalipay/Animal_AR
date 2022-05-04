using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Filter : MonoBehaviour
{
    GameObject FindInActiveObjectByTag(string tag)
    {
        Transform[] objs = Resources.FindObjectsOfTypeAll<Transform>() as Transform[];
        for (int i = 0; i < objs.Length; i++)
        {
            if (objs[i].hideFlags == HideFlags.None)
            {
                if (objs[i].CompareTag(tag))
                {
                    return objs[i].gameObject;
                }
            }
        }
        return null;
    }

    public void showoll()
    {
        GameObject objByTag = FindInActiveObjectByTag("America");
        GameObject objByTag1 = FindInActiveObjectByTag("Africa");
        GameObject objByTag2 = FindInActiveObjectByTag("Dead");

        objByTag.SetActive(true);
        objByTag1.SetActive(true);
        objByTag2.SetActive(true);
    }

    public void filter_africa()
    {
        GameObject[] gameObjectArray = GameObject.FindGameObjectsWithTag("America");

        foreach (GameObject go in gameObjectArray)
        {
            go.SetActive(false);
        }
    }

    public void filter_dead()
    {
        GameObject[] gameObjectArray = GameObject.FindGameObjectsWithTag("Africa");
        GameObject[] gameObjectArray1 = GameObject.FindGameObjectsWithTag("America");

        foreach (GameObject gameObject in gameObjectArray)
        {
            gameObject.SetActive(false);
        }

        foreach (GameObject gameObject in gameObjectArray1)
        {
            gameObject.SetActive(false);
        }
    }
}
