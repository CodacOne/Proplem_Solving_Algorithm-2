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


float FunctionNumberCheck(int number,int CheckNumber)
{
      int FreqCount=0;
      int Remainder=0;
     while(number > 0)
     {
        Remainder= number%10;
        number=number/10;
         if( Remainder==CheckNumber)
         {
             FreqCount++;

         }
     }

   return FreqCount;
}



int main()
{

   int number=ReadPositiveNumber("Enter the number,pls");
      int NumberCheck = ReadPositiveNumber("Enter the number want to check,pls");


  cout<<"Digit "<<NumberCheck<<" Frequency is "<< FunctionNumberCheck(number,NumberCheck)<<" Time(s)";





    return 0;
}
