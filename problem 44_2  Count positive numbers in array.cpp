#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>



using namespace std;


int RandomNumber(int From, int To)
 {   int randNum = rand() % (To - From + 1) + From;
    return randNum;

 }

/*
int ReadPositiveNumber(string message)
{
  int number=0;

  do{
   cout<<message<<endl;
   cin>>number;
  }while (number<=0);

  return number;

}    */

 void GenerateArrayRandom(int arr[100],int& arrLength)
 {
     cout<<"Enter the element of array :"<<endl;
     cin>>arrLength;
     for(int i=0;i<arrLength;i++)
     {
        arr[i]=RandomNumber(-100,100);

     }
 }

short PositiveNumbersCount(int arr[100],int arrLength)
{
    int counter=0;
       for(int i=0;i<arrLength;i++)
     {
        if(arr[i]>=0)
        {
           counter++;

        }

     }

    return counter;

}


 void printArray(int arr[100],int arrLength)
 {
     cout<<"Array Elements :"<<endl;

      for(int i=0;i<arrLength;i++)
     {
        cout<<arr[i]<<" ";

     }

     cout<<endl;

 }

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;


   GenerateArrayRandom(arr,arrLength);


   printArray(arr,arrLength);
   cout<<"Positive numbers count is: "<<PositiveNumbersCount(arr,arrLength);


    return 0;
}
