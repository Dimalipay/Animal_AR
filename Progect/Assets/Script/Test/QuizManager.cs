using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class QuizManager : MonoBehaviour
{
    public List<QuastionsAndAnsvers> QnA;
    public GameObject[] options;
    public int currentQuestion;

    public GameObject Quizpanel;
    public GameObject Gopanel;

    public Text QiestionTxt;
    public Text ScoreTxt;

    int totalQuestions = 0;
    public int score;

    private void Start()
    {
        totalQuestions = QnA.Count;
        Gopanel.SetActive(false);
        generationQuastion();
    }

    public void Retry()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    void GameOver()
    {
        Quizpanel.SetActive(false);
        Gopanel.SetActive(true);
        ScoreTxt.text = score + "/" + totalQuestions;
    }

    public void correct()
    {
        score += 1;
        QnA.RemoveAt(currentQuestion);
        generationQuastion();    
    }

    public void wrong()
    {
        QnA.RemoveAt(currentQuestion);
        generationQuastion();
    }

    void SetAns()
    {
        for (int i = 0; i < options.Length; i++)
        {
            options[i].GetComponent<AnswersScript>().isCorrect = false;
            options[i].transform.GetChild(0).GetComponent<Text>().text = QnA[currentQuestion].Answers[i];

            if(QnA[currentQuestion].CorrectAnswer == i+1)
            {
                options[i].GetComponent<AnswersScript>().isCorrect = true;
            }
        }
    }

    void generationQuastion()
    {
        if (QnA.Count > 0)
        {
            currentQuestion = Random.Range(0, QnA.Count);

            QiestionTxt.text = QnA[currentQuestion].Question;
            SetAns();
        }
        else
        {
            Debug.Log("Out of Questions");
            GameOver();
        }
        
    }
}
