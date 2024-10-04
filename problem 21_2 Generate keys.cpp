#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;

enum enCharType{capitalLitter=1,smallLitter=2,specialCharacterts=3,digits=4};

int ReadPositiveNumber(string Message)
{   int number=0;


    do{
       cout<<Message<<endl;
    cin>>number;
    }while(number<=0);

    return number;

}

  int RandomNumber(int From,int To)
  {
      int RandNum=rand()%(To-From+1)+From;

      return RandNum;
  }

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
        {
   case  enCharType::capitalLitter:
    {
        return (RandomNumber(65,90));
        break;
    }

      case  enCharType::smallLitter:

    {
        return (RandomNumber(97,122));
        break;
    }

     case  enCharType::specialCharacterts:
    {
        return (RandomNumber(33,47));
        break;
    }

     case  enCharType::digits:
    {
        return (RandomNumber(48,57));
        break;
    }

         }

}

string GenerateWord(enCharType CharType,short Length)
{
    string word="";

    for(int i=1;i<=Length;i++)
    {


    word =word+GetRandomCharacter(CharType);

    }
    return word;
}

string KeyGenerate()
{
  string key="";

  key=GenerateWord(capitalLitter,10)+ "_";
  key=key+GenerateWord(capitalLitter,5)+ "_";
  key=key+GenerateWord(smallLitter,10)+ "_";
  key=key+GenerateWord(smallLitter,5);

  return key;

}

void GenerateKeys(short NumberOfKeys)
{

    for(int i=1;i<=NumberOfKeys;i++)
    {
        cout<<"Key["<<NumberOfKeys<<"]="<<KeyGenerate()<<endl;


    }


}

int main()
{
    srand((unsigned)time(NULL));
  GenerateKeys(ReadPositiveNumber("Enter of number is positive please :"));

 return 0;

}
