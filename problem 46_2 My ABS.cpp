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

float GetFractionPart(float number,int IntPart)
{

    float FractionPart;
    FractionPart=number-IntPart;
    return FractionPart;
}


float MyRoundResult(float number)
{
    int IntPart=int(number);
  float  FractionPart=GetFractionPart(number,IntPart);
    if(abs(FractionPart)>=0.5)
    {
        if (number>0)
       return ++IntPart;

       else
       return --IntPart;
    }

    else
        return IntPart;

}

int main()
{
    float number;
  number  =ReadNumber();

cout<< "My Round  Result :"<<MyRoundResult(number)<<endl;

  cout<<"c++ Round result "<<round(number);





    return 0;
}
