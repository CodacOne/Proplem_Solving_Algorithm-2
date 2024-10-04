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



float MyFloorResult(float number)
{



    if(number>0)


       return (int)number;


    if(number<0)


       return (int)number-1;





}

int main()
{
    float number;
  number  =ReadNumber();

cout<< "My floor  Result :"<<MyFloorResult(number)<<endl;

  cout<<"c++ floor result "<<floor(number);





    return 0;
}
