#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>



using namespace std;

  enum enCharacterType{CapittalLetter=1,SmallLetter=2,SpecialCharacter=3,Digits=4};



int RandomNumber(int From, int To)
 {   int randNum = rand() % (To - From + 1) + From;
    return randNum;

 }

char GetRandomCharacter(enCharacterType CharType)
{
    switch (CharType)
    {
        case enCharacterType::SmallLetter:
            {
            return  RandomNumber(97,122);
             break;
            }
        case enCharacterType::CapittalLetter:
            {
            return  RandomNumber(65,90);
             break;
            }
        case enCharacterType::SpecialCharacter:
            {
            return  RandomNumber(33,47);
             break;
            }
        case enCharacterType::Digits:
            {
            return  RandomNumber(48,57);
             break;
            }
    }

}

int main()
{
    srand((unsigned)time(NULL));

   cout<< GetRandomCharacter(enCharacterType::CapittalLetter)<<endl;
    cout<< GetRandomCharacter(enCharacterType::SmallLetter)<<endl;
     cout<< GetRandomCharacter(enCharacterType::SpecialCharacter)<<endl;
      cout<< GetRandomCharacter(enCharacterType::Digits)<<endl;




    return 0;
}
