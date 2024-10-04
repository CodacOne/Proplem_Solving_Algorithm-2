#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

enum enCharType{smallLetter=1,capitialLitter=2,character=3,digits=4};


int RandomNumber(int From, int To)
 {   int randNum = rand() % (To - From + 1) + From;
    return randNum;

 }


int ReadPositiveNumber(string message)
{
  int number=0;

  do{
   cout<<message<<endl;
   cin>>number;
  }while (number<=0);

  return number;

}


char  GetRandomCharacter(enCharType CharType )
{
 switch(CharType)
 {
    case enCharType::smallLetter:
    {
        return char(RandomNumber(97,122));
        break ;
    }

    case enCharType::capitialLitter:
    {
        return char(RandomNumber(65,90));
        break ;
    }


    case enCharType::character:
    {
        return char(RandomNumber(33,47));
        break ;
    }


    case enCharType::digits:
    {
        return char(RandomNumber(48,57));
        break ;
    }


  }
}

string GenerateWord (enCharType CharType ,short length )
{
  string word;
  for (int i=1;i<=length;i++)
  {

   word=word + GetRandomCharacter(CharType);


  }

   return word;

}


string GenerateKey()
{
   string key="";

   key=GenerateWord(capitialLitter ,5) + "_";
    key=key + GenerateWord(capitialLitter ,5) + "_";
     key=key + GenerateWord(smallLetter ,5) + "_";
      key=key + GenerateWord(smallLetter ,5) + "_";

    return key;

}

void FillArrayOfKeys(string arr[100],short NumberOfKeys)
 {
     for (int i = 1; i <= NumberOfKeys; i++)
      {

     arr[i]=GenerateKey();
      }

  }

void PrintArray(string arr[100],short NumberOfArrays)
{

     for (int i = 0; i < NumberOfArrays; i++)
      {
          cout<<"Array["<<i<<"]="<<arr[i+1]<<endl;

      }

}

int main()
{
  srand((unsigned)time(NULL));

  string arr[100];
  int arrlength;


     arrlength=ReadPositiveNumber("Pleaes enter how many keys to generate? \n ");


    FillArrayOfKeys(arr,arrlength);

      PrintArray(arr,arrlength);

   return 0;
}
