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


float MyCeilResult(float number)
{  int IntPart;
   IntPart =int(number);

  float FractionPart = GetFractionPart(number,IntPart);




        if(number>0 && FractionPart!=0)

           {

            return int(number) +1;
           }

       if(number<0)
         {

          return (int) number;
         }

         if(FractionPart==0)

         {


       return number;
         }





}

int main()
{
    float number;
  number  =ReadNumber();

cout<< "My ceil  Result :"<<MyCeilResult(number)<<endl;

  cout<<"c++ ceil  result "<<ceil(number);





    return 0;
}
