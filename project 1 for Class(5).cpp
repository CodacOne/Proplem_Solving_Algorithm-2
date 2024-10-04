#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

enum  enPlayerChoice{stone=1,paper=2,scissors=3};
enum enWinner{Player=1,Computer=2,Draw=3};

int RandomeNumber(int From,int To)
{
    int randomNumber=0;
    randomNumber=rand()%(To-From+1)+From;
    return randomNumber;
}

 enPlayerChoice GetComputerChoice()
{
    int Choice=RandomeNumber(1,3);
     return ( enPlayerChoice)Choice;
}

short HowManyRounds(string message)
{
  int number=0;
  do{

    cout<<message<<endl;
    cin>>number;

  }while(number<=0 || number>10);


 return number;
}


 enPlayerChoice GetPlayerChoice()
{
    short Choice=0;
    do{
        cout<<"Your choice: [1]:stone, [2]:paper, [3]:stone, ?"<<endl;
        cin>>Choice;

    }while(Choice<1 || Choice>3);

     return ( enPlayerChoice)Choice;
}

struct stRoundInfo
{
    enPlayerChoice PlayerChoice;
     enPlayerChoice ComputerChoice;
     enWinner RoundWinner;
        string WinnerName;

};

struct StGameResults
{
    int GameRound;
    int PlayerWonTime;
    int ComputerWonTime;
    int DrawTimes;
    enWinner FinalWinner;
    string WinnerName="";
};

string ChoiceName(enPlayerChoice Choice)
{
   string arrChoiceName[3]={"Stone","Paper","scissors"};
     return arrChoiceName[Choice-1];

}

string WinnerName(enWinner Winner)
{
   string arrWinnerName[3]={"Player","Computer","No Winner"};

    return arrWinnerName[Winner-1];

}






 enWinner WhoRoundWinner(stRoundInfo RoundInfo)
{
    if(RoundInfo.ComputerChoice==RoundInfo.PlayerChoice)
    {
        return enWinner::Draw;
    }

  switch( RoundInfo.PlayerChoice)
  {

      case  enPlayerChoice::paper:
    if(RoundInfo.ComputerChoice== enPlayerChoice::scissors)
    {

        return enWinner::Computer;
    }
         break;


      case  enPlayerChoice::scissors:
    if(RoundInfo.ComputerChoice== enPlayerChoice::stone)
    {

        return enWinner::Computer;
    }
        break;

      case  enPlayerChoice::stone:
    if(RoundInfo.ComputerChoice== enPlayerChoice::paper)
    {

        return enWinner::Computer;
    }
      break;

  }
   return enWinner::Player;
}

void PrintRoundResults(stRoundInfo RoundInfo)
{




         cout<<"player1 choice:"<<ChoiceName(RoundInfo.PlayerChoice)<<endl;
       cout<< "Computer choice:"<<ChoiceName(RoundInfo.ComputerChoice)<<endl;
      cout<< "Round Winner:"<<RoundInfo.WinnerName<<endl;



}


enWinner WhoFinalWinner(short  CounterTimeWonComputer,short CounterTimeWonPlayer)
{
    if(CounterTimeWonComputer==CounterTimeWonPlayer)

        return enWinner::Draw;


  else if(CounterTimeWonPlayer>CounterTimeWonComputer)

         return enWinner::Player;
    else
      return enWinner::Computer;

}



 void PrintGameResults(StGameResults GameResults)
 {
     cout<<endl;
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"-------------------------------------"<<endl;

 cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<
 "+++  G a m e O v e r  +++"<<endl;
  cout<<"\t"<<"\t"<<"\t"<<"\t"<<"-------------------------------------"<<endl;
   cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<
     "      [Game Result ]"<<endl;

    cout<<"Game Rounds       :"<<GameResults.GameRound<<endl;
    cout<<"Player Won Time   :"<<GameResults.PlayerWonTime<<endl;
    cout<<"Computer Won Time :"<<GameResults.ComputerWonTime<<endl;
    cout<<"Draw Times        :"<<GameResults.DrawTimes<<endl;
    cout<<"Winner Name       :"<<GameResults.WinnerName<<endl;

 }



  StGameResults FillGameResult  (int RoundNumber,int CounterTimeWonPlayer,
                     int CounterTimeWonComputer,int CounterTimeDraw )
 {
     StGameResults GameResults;

     GameResults.GameRound=RoundNumber;
     GameResults.PlayerWonTime=CounterTimeWonPlayer;
     GameResults.ComputerWonTime=CounterTimeWonComputer;
     GameResults.DrawTimes=CounterTimeDraw;
     GameResults.FinalWinner= WhoFinalWinner(CounterTimeWonPlayer,
                              CounterTimeWonComputer);
     GameResults.WinnerName= WinnerName(GameResults.FinalWinner);
    return GameResults;
 }

 void SetWinnerScreenColor(enWinner winnerName)
{
    switch(winnerName)
    {
         case  enWinner::Player:
         {
          system("color 2F");
          break;
         }

              case  enWinner::Computer:
              {
              system("color 4F");
              break;
              }

        default :
                system("color 6F");
             break;
    }
}


void  PlayGame(int RoundNumber)
{
    stRoundInfo RoundInfo;
     StGameResults GameResults;

    int  CounterTimeWonPlayer=0,CounterTimeWonComputer=0,
    CounterTimeDraw=0;



    for(int i=1;i<= RoundNumber;i++)
    {
      cout<<"Round "<<"["<<i<<"]"<<" begins :"<<endl;

    cout<<endl;
         cout<<"------------Round"<<"["<<i<<"]------------"<<endl;
      RoundInfo.PlayerChoice=GetPlayerChoice();
      RoundInfo.ComputerChoice=GetComputerChoice();
       RoundInfo.RoundWinner=WhoRoundWinner(RoundInfo);
      RoundInfo.WinnerName=WinnerName(RoundInfo.RoundWinner);
      PrintRoundResults(RoundInfo);
       cout<<"-------------------------------------"<<endl;
       cout<<endl;




    if(RoundInfo.RoundWinner==enWinner::Player)

           CounterTimeWonPlayer++;


     else   if(RoundInfo.RoundWinner==enWinner::Computer)

            CounterTimeWonComputer++;


         else


           CounterTimeDraw++;


    }

   GameResults = FillGameResult(RoundNumber,CounterTimeWonPlayer,
                       CounterTimeWonComputer,CounterTimeDraw);

        PrintGameResults(GameResults);
        SetWinnerScreenColor(GameResults.FinalWinner);


}

 void ResetScreen()
 {
   system("cls");
     system("color 0F");

 }




 void StartGame()
 {


      char GameAgain ='y';
      do{
            ResetScreen();
        PlayGame(HowManyRounds("How Many Rounds 1 To 10 ?"));

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


