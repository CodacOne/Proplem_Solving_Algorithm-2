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

 void GenerateArrayRandom(int arr[100],int arrLength)
 {

     for(int i=1;i<=arrLength;i++)
     {
        arr[i]=i;

     }
 }

 void swapArray(int a,int b)
 {
     int temp=a;
         a=b;
         b=temp;

 }

void AftershuffleArray(int arr[100],int arrLength)
{
  for (int i=1;i<=10;i++)
  {
 swap(arr[RandomNumber(1,arrLength)],arr[RandomNumber(1,arrLength)]);


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



int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;

  arrLength=ReadPositiveNumber("Enter number of elements :");

   GenerateArrayRandom(arr,arrLength);

    cout<<"Array elements before shuffle :"<<endl;
   printArray(arr,arrLength);

   AftershuffleArray(arr,arrLength);

    cout<<"Array elements After shuffle :"<<endl;
   printArray(arr,arrLength);



    return 0;
}
