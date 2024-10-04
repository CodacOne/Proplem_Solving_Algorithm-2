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

float InvertedPattern(int number)
{
    int counter=0;
   for(int i=1;i<=number;i++)
   {
         for(int j=1;j<=i;j++)

         {
              cout<< i;
         }
                cout<<endl;

       }





   }






int main()
{

   int number=ReadPositiveNumber("Enter a number,pls");
    InvertedPattern(number);

    return 0;
}
