#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>



using namespace std;


int RandomNumber(int From, int To)
 {   int randNum = rand() % (To - From + 1) + From;
    return randNum;

 }


  void FillArrayRandom(int arr[100],int& arrLength)
 {
     cout<<"Enter the element of array :"<<endl;
     cin>>arrLength;
     for(int i=0;i<arrLength;i++)
     {
        arr[i]=RandomNumber(1,100);

     }
 }


void  AddArrayElements(int number,int arr2[100],int& arrLength2)
{

       arr2[arrLength2]=number;
       arrLength2++;

}


  void CopyArrayUsingAddArrayElements(int arr[100],int arr2[100],int arrLength,int& arrLength2)
  {

      for(int i=0;i<arrLength;i++)
      {

         AddArrayElements(arr[i],arr2,arrLength2);
      }

  }

 void printArray(int arr[100],int arrLength)
 {

      for(int i=0;i<arrLength;i++)
     {
        cout<<arr[i]<<" ";

     }

     cout<<endl;

 }

int main()
{

      srand((unsigned)time(NULL));
    int arr[100],arrLength=0,arrLength2=0;
    int arr2[100];
     FillArrayRandom(arr,arrLength);

    CopyArrayUsingAddArrayElements(arr,arr2,arrLength,arrLength2);


   cout<<"Array 1 Elements:"<<arrLength<<endl;
        printArray(arr,arrLength);

    cout<<"Array 2 Elements after copy:"<<arrLength<<endl;
   printArray(arr2,arrLength2);


    return 0;
}
