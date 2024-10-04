#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;


 enum enQuestionsLevel{Easy=1,Med=2,Hard=3,Mix=4};
 enum enOperationType{Add=1,Sub=2,Mul=3,Div=4,Mixx=5};

 enQuestionsLevel  ReadQustionLevel()
{
    short QustionLevel=0;

    do{
  cout<<"Enter Question Level :[1]Easy, [2]Med, [3]Hard, [4]Mix ?"<<endl;
  cin>>QustionLevel;

    }while(QustionLevel<1 || QustionLevel>4);

 return (enQuestionsLevel)QustionLevel;

}

enOperationType ReadOperatingType()

{


    short OperatingType=0;
    do{

  cout<<"Enter Operation Type :[1]Sum, [2]Sub, [3]Mul, [4]Div ,[5]Mix ?"<<endl;
  cin>>OperatingType;
    }while(OperatingType<1 || OperatingType>5);

 return (enOperationType)OperatingType;

}


struct stQuestion
{
  int Number1 = 0;
  int Number2 = 0;
  enOperationType OperationType;
  enQuestionsLevel QuestionLevel;
  int CorrectAnswer = 0;
  int PlayerAnswer = 0;
  bool AnswerResult = false;

};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;

};


int RandomNumber(int From,int To)
{

     int  Random=rand()%(To-From+1)+From;

        return   Random;
}


int SimpleCalculater(int Num1,int Num2,enOperationType OpType)
{
    switch(OpType)
    {
   case enOperationType::Add:
          return Num1+Num2;
    case enOperationType::Sub:
          return Num1-Num2;
    case enOperationType::Mul:
          return Num1*Num2;
    case enOperationType::Div:
          return Num1/Num2;
}   }




enOperationType GetRandomOpType()
{
    int Op=RandomNumber(1,4);
    return   (enOperationType)Op;
}



stQuestion GenerateQuestion(enQuestionsLevel QuestionsLevel,enOperationType OpType)
{
     stQuestion Quistion;

   if(OpType==enOperationType::Mixx)
   {

      OpType=GetRandomOpType() ;

   }
      Quistion.OperationType=OpType;

    if(QuestionsLevel==enQuestionsLevel::Mix)
   {

     QuestionsLevel=(enQuestionsLevel)RandomNumber(1,3);

   }

      switch(QuestionsLevel)
      {

        case enQuestionsLevel::Easy:
        {
         Quistion.Number1 = RandomNumber(1,10) ;
         Quistion.Number2 = RandomNumber(1,10);
       Quistion.CorrectAnswer=SimpleCalculater(Quistion.Number1,Quistion.Number2
                                    , Quistion.OperationType);
             Quistion.QuestionLevel= QuestionsLevel ;
             return Quistion;
        }

                case enQuestionsLevel::Med:
        {
    Quistion.Number1 = RandomNumber(10,50) ;
    Quistion.Number2 = RandomNumber(10,50) ;
    Quistion.CorrectAnswer=SimpleCalculater(Quistion.Number1,Quistion.Number2
                                     , Quistion.OperationType);
            Quistion.QuestionLevel= QuestionsLevel ;
            return Quistion;
        }



         case enQuestionsLevel::Hard:
        {

         Quistion.Number1 = RandomNumber(50,100) ;
         Quistion.Number2 = RandomNumber(50,100) ;

      Quistion.CorrectAnswer=SimpleCalculater(Quistion.Number1,Quistion.Number2
                      , Quistion.OperationType);
             Quistion.QuestionLevel= QuestionsLevel ;
             return Quistion;
}
}
}

int ReadTheQuistionAnswer()
{
    int Answer=0;
    cin>>Answer;
   return Answer;
}

string GetOpTypeSymbol(enOperationType OperationType)
{
    switch (OperationType)

    {
    case enOperationType::Add:
             return "+";
    case enOperationType::Sub:
             return "-";
    case enOperationType::Mul:
             return "*";
    case enOperationType::Div:
             return "/";

    }
}


 void PrintTheQuestion(stQuizz& Quizz,short QuistionNumber)
  {

  cout<<"Qustion ["<<QuistionNumber<<"/"<<Quizz.NumberOfQuestions<<"]"<<
  endl<<endl;
  cout<<Quizz.QuestionList[QuistionNumber].Number1<<endl;
   cout<<Quizz.QuestionList[QuistionNumber].Number2<<" "<<
   GetOpTypeSymbol(Quizz.QuestionList[QuistionNumber].OperationType)<<
   endl<<endl;
   cout<<"----------" <<endl;
  }


  void CorrectTheQuistionAnswer(stQuizz& Quizz,short QuistionNumber)
{



    if(Quizz.QuestionList[QuistionNumber].PlayerAnswer
       !=Quizz.QuestionList[QuistionNumber].CorrectAnswer)
    {

       Quizz.NumberOfWrongAnswers++;

         system("color 4F");
      cout<<"Wrong Answer :(-" <<endl;
         cout<<"The Right Answer is :" <<
         Quizz.QuestionList[QuistionNumber].CorrectAnswer<<endl<<endl;
    }

    else
    {

      Quizz.NumberOfRightAnswers++;
     cout<<"Right Answer :-)" <<endl;
       system("color 2F");


    }
}

string ShowFinalResult(stQuizz& Quizz)
{
    if(Quizz.NumberOfRightAnswers < Quizz.NumberOfWrongAnswers)
           {
               return "Final Result Is Fail :-(";
           }
       else
       {
             return "Final Result Is Pass :)-";
       }
}

string GetQuistionLevelText(enQuestionsLevel QuestionsLevel)
{
    string arrQuestionsLevel[4]={"Easy","Med","Hard","Mix"};
     return arrQuestionsLevel[QuestionsLevel-1];
}

void PrintQuizzResult(stQuizz& Quizz)
{

    cout<<endl<<endl;
   cout<<"--------------------"<<endl;
   cout<< ShowFinalResult(Quizz)<<endl;
    cout<<"--------------------"<<endl<<endl;
    cout<<"Number Of Quistion :  "<<Quizz.NumberOfQuestions<<endl;
     cout<<"Quistion Level:  "<<GetQuistionLevelText(Quizz.QuestionsLevel)<<endl;
      cout<<"OpType:  "<<GetOpTypeSymbol(Quizz.OpType)<<endl;
       cout<<"Number Of Rightg Answers :  "<<Quizz.NumberOfRightAnswers<<endl;
        cout<<"Number Of Wrong Answers :  "<<Quizz.NumberOfWrongAnswers<<endl;
}


void AskAndTheQuistionAnsswer(stQuizz& Quizz)
{
    for(int i=1;i<=Quizz.NumberOfQuestions;i++)
       {
         PrintTheQuestion(Quizz,i) ;
      Quizz.QuestionList[i].PlayerAnswer= ReadTheQuistionAnswer();
       CorrectTheQuistionAnswer(Quizz,i);
       }



}


void GenerateQuizQuestion(stQuizz& Quizz)
{
    for(int i=1;i<=Quizz.NumberOfQuestions;i++)
    {

    Quizz.QuestionList[i]=GenerateQuestion(Quizz.QuestionsLevel,Quizz.OpType);

    }

}


 int ReadHowManyQuestion(string Message)
{
    int number=0;

    do{
        cout<< Message<<endl;
         cin>>number;

    }while(number<1 || number>10);
    return number;

}

void ResetScreen()
{
    system("cls");
    system("color 0F");


}




void StartQuiz()
{
    stQuizz Quizz;
    char playAgain='y';
  do{
        ResetScreen();
  Quizz.NumberOfQuestions=ReadHowManyQuestion
  ("How many Question Do you want to answer?");
   Quizz.QuestionsLevel=ReadQustionLevel();
   Quizz.OpType=ReadOperatingType();

    GenerateQuizQuestion(Quizz);
    AskAndTheQuistionAnsswer(Quizz);
    PrintQuizzResult(Quizz);
    cout<<"Do you Want to play Again Y/N?"<<endl;
    cin>>playAgain;

    } while(playAgain=='y' || playAgain=='Y');
}





int main()
{
    srand((unsigned)time(NULL));

      StartQuiz();


    return 0;
}
