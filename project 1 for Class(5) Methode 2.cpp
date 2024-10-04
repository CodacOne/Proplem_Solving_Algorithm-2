#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>

using namespace std;


 enum enGameChoice{stone=1,paper=2,scissors=3};
   enum enWinner{Player=1,Computer=2,Draw=3};

int RoundNumber(int From,int To)
{

     int round=rand()%(To-From+1)+From;

        return  round;
}

struct stRoundInfo
{

    enGameChoice PlayerChoice;
    enGameChoice ComputerChoice;
    enWinner Winner ;
    string WinnerName;
};

struct stGameResult
{
    short GameRounds;
    short PlayerWonTimes;
    short ComputerWonTimes;

    short DrawTimes;

    enWinner GameWinner;
    string  FinalWinner;
};

string ChoiceName(enGameChoice choice)
{
   string arrChoiceName[3]={"stone","paper","scissors"};

    return arrChoiceName[choice-1];
}


string WinnerName(enWinner Winner)
{
   string arrWinnerName[3]={"Player","Computer","No Winner"};

    return arrWinnerName[Winner-1];
}



enGameChoice ReadPlayerChoice()
{   int choice=0;
    do {
         cout<<"Your Choice: [1]:stone,[2]:paper,[3]:scissors ?"<<endl;
         cin>>choice;


    }while(choice>3 || choice<1);


    return (enGameChoice)choice;

}

int ReadRoumdNumber(string Message)
{
    int number=0;

    do{
        cout<< Message<<endl;
         cin>>number;

    }while(number<1 || number>10);
    return number;

}


 enGameChoice FillGameChoice()
{
   int choice=RoundNumber(1,3);

    return (enGameChoice)choice;
}


enWinner  WhoWonTheRound(stRoundInfo RoundInfo)
{
     if(RoundInfo.PlayerChoice==RoundInfo.ComputerChoice)
     {
         return enWinner::Draw;

     }


  switch(RoundInfo.PlayerChoice)
{
      case enGameChoice::stone:

         if(RoundInfo.ComputerChoice==enGameChoice::paper)
         {
           return  enWinner::Computer;

         }
           break;
             case enGameChoice::paper:

           if(RoundInfo.ComputerChoice==enGameChoice::scissors)
           {
             return  enWinner::Computer;

           }
              break;
    case enGameChoice::scissors:

    if(RoundInfo.ComputerChoice==enGameChoice::scissors)
    {
    return  enWinner::Computer;

    }
      break;
}

     return enWinner::Player;

}

void  PrintRoundResult(stRoundInfo RoundInfo)
{
    cout<<"Player Choice : "<<ChoiceName(RoundInfo.PlayerChoice)<<endl;
     cout<<"Computer Choice : "<<ChoiceName(RoundInfo.ComputerChoice)<<endl;
        cout<<"Round Winner : "<<WinnerName(RoundInfo.Winner)<<endl;

        cout<<endl<<"--------------------------------------------"<<endl<<endl;
}

string Tabs(int TabsNumber)
{
     string t="";
    for(int i=1;i<=TabsNumber;i++)
    {
       t=t+"\t";
        cout<<t;

    }
    return t;

}


void ShowGameOverScreen()
{
    cout<<Tabs(2)<<"----------------------------------------------------"<<endl;

     cout<<Tabs(2)<<"           +++ G a m e  O v e r +++"<<endl;

       cout<<Tabs(2)<<"----------------------------------------------------"<<endl;

        cout<<Tabs(2)<<"------------------ [Game Result ] ------------------"<<endl<<endl;

}



 enWinner  WhoWonGame(short PlayerWonTimes,short ComputerWonTimes)
 {
     if(PlayerWonTimes==ComputerWonTimes)

        return enWinner::Draw;

     else if(PlayerWonTimes>ComputerWonTimes)
         return enWinner::Player;

     else
           return enWinner::Computer;

 }


stGameResult  FillGameResult(short GameRounds,short PlayerWonTimes,short ComputerWonTimes

      ,short DrawTimes)

{
       stGameResult GameResult;

       GameResult.GameRounds= GameRounds;
         GameResult.PlayerWonTimes= PlayerWonTimes;
            GameResult.ComputerWonTimes=ComputerWonTimes;
              GameResult.DrawTimes=DrawTimes;

        GameResult.GameWinner= WhoWonGame(PlayerWonTimes,ComputerWonTimes);
        GameResult.FinalWinner=WinnerName(GameResult.GameWinner);

      return  GameResult;
}



void SetColorScreen(enWinner Winner)
{
    switch(Winner)
 {
    case enWinner::Player:
        system("color 2F");
       break;

      case enWinner::Computer:
        system("color 4F");
        cout<<"\a";
       break;


      default:
           system("color 6F");
            break;
 }
}



void PrintGameResult(stGameResult GameResult)
{
          cout<<Tabs(2)<<"Game Rounds        :"<<GameResult.GameRounds<<endl;
          cout<<Tabs(2)<<"Player Won Times   :"<<GameResult.PlayerWonTimes<<endl;
          cout<<Tabs(2)<<"Computer Won Times :"<<GameResult.ComputerWonTimes<<endl;
          cout<<Tabs(2)<<"Draw Times         :"<<GameResult.DrawTimes<<endl;
          cout<<Tabs(2)<<"Final Winner       :"<<GameResult.FinalWinner<<endl;
           SetColorScreen(GameResult.GameWinner);

}


stGameResult PlayGame(int RoundNumber)

{  stRoundInfo RoundInfo;
   short PlayerWinTimes=0;
         short ComputerWinTimes=0;
         short DrawTimes=0;



    for(int i=1;i<=RoundNumber;i++)
    {

        cout<<"Round ["<<i<<"] begins:"<<endl<<endl;

          RoundInfo.PlayerChoice =ReadPlayerChoice();  // Fill struct RoundfInfo of game round
          RoundInfo.ComputerChoice=FillGameChoice();
          RoundInfo.Winner=WhoWonTheRound(RoundInfo);


          cout<<"-------------Round ["<<i<<"] -------------"<<endl<<endl;

             PrintRoundResult(RoundInfo);

         if(RoundInfo.Winner==enWinner::Player)

             PlayerWinTimes++;

             else if (RoundInfo.Winner==enWinner::Computer)
                ComputerWinTimes++;

                else
                    DrawTimes++;

    }

   return  FillGameResult(RoundNumber,PlayerWinTimes,ComputerWinTimes, DrawTimes);


}


void ResetScreen()

{


    system("cls");
    system("color 0F");


}

void StartGame()

{   char GameAgain='y';

    do{
            ResetScreen();
    int RoumdNumber=ReadRoumdNumber("How many Rounds from 1 to 10 ?");

   stGameResult GameResult =PlayGame(RoumdNumber);
    ShowGameOverScreen();

    PrintGameResult(GameResult);


    cout<<"Do you want to play Again Y/N?"<<endl;
    cin>>GameAgain;

     }while(GameAgain=='y' || GameAgain=='Y');


}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();



    return 0;
}
