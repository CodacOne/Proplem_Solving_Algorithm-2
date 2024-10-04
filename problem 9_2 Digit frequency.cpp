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

void PrintAllDigitsFrequency(int  number)
{
    for(int i=0;i<10;i++)
    {
    int DigitFrequency= FunctionNumberCheck(number,i);
        if(DigitFrequency>0)
        {
           cout<<"Digit "<<i<<" Frequency is "<<
           DigitFrequency<<" Time(s)"<<endl;
        }

    }



}



int main()
{

   int number=ReadPositiveNumber("Enter the number,pls");
     PrintAllDigitsFrequency(number);


    return 0;
}
