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

float ReverseNumber(int number)
{
    int Remainder=0,number2=0;
      while(number>0)
      {

     Remainder= number%10;
        number=number/10;
    number2=number2*10+Remainder;

      }
    return number2;
}

bool IsPalindromeNumber(int number)
{

    return  number==ReverseNumber(number);

}

int main()
{

   int number=ReadPositiveNumber("Enter a number,pls");
    if(IsPalindromeNumber(number))
    {

        cout<<"Yes,it is a palindrome number. "<<endl;
    }
   else
     cout<<"No,it is NOT a palindrome number. "<<endl;

    return 0;
}
