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


  void GenerateArray2Random(int arr2[100],int arrLength)
 {

     for(int i=1;i<=arrLength;i++)
     {
        arr2[i]=RandomNumber(1,100);

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

 void SumOfArays(int arr[100],int arr2[100],int arrLength)
 {
     int sum=0;
      for(int i=1;i<=arrLength;i++)
     {
        sum=arr[i]+arr2[i];

       cout<<sum<<" ";
     }
      cout<<endl;
 }


int main()
{
    srand((unsigned)time(NULL));
    int arr[100],arrLength;
    int arr2[100];

   GenerateArrayRandom(arr,arrLength);
   GenerateArray2Random(arr2,arrLength);

    cout<<"Array 1 Elements :"<<endl;
   printArray(arr,arrLength);

    cout<<"Array 2 Elements :"<<endl;
   printArray(arr2,arrLength);

    cout<<endl<<"sum of Array1 and Array2 elements :"<<endl;
   SumOfArays(arr,arr2,arrLength);


    return 0;
}
