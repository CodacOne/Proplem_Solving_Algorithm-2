#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
   do{
    cin>>number;

   }while(number<0);


    return number;
}

float InvertedLetterPattern(int number)
{
    int counter=0;
   for(int i=65+number-1;i>=65;i--)
   {
         for(int j=1;j<=number-(65+number-1-i);j++)

         {
              cout<< char(i);
         }
                cout<<endl;

       }





   }






int main()
{

   int number=ReadPositiveNumber("Enter a number,pls");
    InvertedLetterPattern(number);

    return 0;
}
