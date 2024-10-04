#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>



using namespace std;


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
        arr[i]=RandomNumber(60,100);

     }
 }


 void printArray(int arr[100],int arrLength)
 {
     cout<<"Array Elements :"<<endl;

      for(int i=1;i<=arrLength;i++)
     {
        cout<<arr[i]<<" ";

     }

     cout<<endl;

 }

 int SumOfAray(int arr[100],int arrLength)
 {
     int sum=0;
      for(int i=1;i<=arrLength;i++)
     {
        sum+=arr[i];


     }
      return sum;
 }

 float AverageOfAray(int arr[100],int arrLength)
 {


      return (float) SumOfAray(arr,arrLength)/arrLength;
 }






int main()
{
    srand((unsigned)time(NULL));
    int arr[100],average,arrLength;


   GenerateArrayRandom(arr,arrLength);

   printArray(arr,arrLength);

   int sum=SumOfAray(arr,arrLength);
    cout <<"Sum of all number is :"<<sum<<endl;


       cout <<"Average of all number is :"<<AverageOfAray(arr,arrLength);

    return 0;
}
