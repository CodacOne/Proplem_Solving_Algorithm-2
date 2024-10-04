#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

float ReadNumber()
{
    float number;
    cout<<"Enter a number"<<endl;
    cin>>number;

    return number;
}

float GetFractionPart(int number,int IntPart)
{



    return number-IntPart;
}


float MySrtResult(int number)
{
     for(int i=1;i<=number;i++)
     {
          if(number%i==0 && (i*i)==number)

            return i;
     }




}



int main()
{
    float number;
  number  =ReadNumber();

cout<< "My sqrt  Result :"<<MySrtResult(number)<<endl;

  cout<<"c++ sqrt  result "<<sqrt(number);





    return 0;
}
