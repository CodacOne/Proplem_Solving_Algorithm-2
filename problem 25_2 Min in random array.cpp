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
        arr[i]=RandomNumber(1,100);

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

 int  CheckNumberMin(int arr[100],int arrLength)
{
     int MinNumber=0;
       MinNumber=arr[1];
      for(int i=1;i<=arrLength;i++)
     {


         if(arr[i]<=MinNumber)
            {


       MinNumber=arr[i];

            }

     }

     cout<<"Min number is :"<<MinNumber;

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;



   GenerateArrayRandom(arr,arrLength);

   printArray(arr,arrLength);

   CheckNumberMin(arr,arrLength);



    return 0;
}
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
        arr[i]=RandomNumber(1,100);

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

 int  CheckNumberMin(int arr[100],int arrLength)
{
     int MinNumber=0;
       MinNumber=arr[1];
      for(int i=1;i<=arrLength;i++)
     {


         if(arr[i]<=MinNumber)
            {


       MinNumber=arr[i];

            }

     }

     cout<<"Min number is :"<<MinNumber;

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;



   GenerateArrayRandom(arr,arrLength);

   printArray(arr,arrLength);

   CheckNumberMin(arr,arrLength);



    return 0;
}
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
        arr[i]=RandomNumber(1,100);

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

 int  CheckNumberMin(int arr[100],int arrLength)
{
     int MinNumber=0;
       MinNumber=arr[1];
      for(int i=1;i<=arrLength;i++)
     {


         if(arr[i]<=MinNumber)
            {


       MinNumber=arr[i];

            }

     }

     cout<<"Min number is :"<<MinNumber;

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;



   GenerateArrayRandom(arr,arrLength);

   printArray(arr,arrLength);

   CheckNumberMin(arr,arrLength);



    return 0;
}
