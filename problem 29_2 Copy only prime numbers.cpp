#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;


enum enPrimeNumber{prime=1,notPrime=2};


int RandomNumber(int From, int To)
 {   int randNum = rand() % (To - From + 1) + From;
    return randNum;

 }


int ReadPositiveNumber(string message)
{
  int number=0;

  do{
   cout<<message<<endl;
   cin>>number;
  }while (number<=0);

  return number;

}

 void GenerateArrayRandom(int arr[100],int& arrLength)
 {
     cout<<"Enter the element of array :"<<endl;
     cin>>arrLength;
     for(int i=1;i<=arrLength;i++)
     {
        arr[i]=RandomNumber(1,100);

     }
 }





 void printArray(int arr[100],int arrLength)
 {
      for(int i=1;i<=arrLength;i++)
     {
        cout<<arr[i]<<" ";

     }

     cout<<endl;

 }



enPrimeNumber checkNumber(int number)
{
    int HalfNumber=round(number/2);

    for(int i=2;i<=HalfNumber;i++)
    {
        if(number%i==0)

            return enPrimeNumber::notPrime;

    }

     return enPrimeNumber::prime;
}



void printNumberPrime(int arr[100],int arr2[100],int arrLength,int& arrLength2)
  {
      int counter=0;
         for(int i=1;i<=arrLength;i++)
      {
        if( checkNumber(arr[i])==enPrimeNumber::prime )

        arr2[counter]=arr[i];
        counter++;
      }
       arrLength2=counter;
  }

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength,arrLength2=0;
    int arr2[100];


   GenerateArrayRandom(arr,arrLength);
   printNumberPrime(arr,arr2,arrLength,arrLength2);

      cout<<"Array 1 Elements :"<<endl;
         printArray(arr,arrLength);

               cout<<"prime numbers is Array 2 :"<<endl;
                  printArray(arr2,arrLength2);


    return 0;
}
