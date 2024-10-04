#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <math.h>



using namespace std;



 void FillArray(int arr[100],int& arrLength)
  {
     cout<<"Enter array elements :"<<endl;
     cin>>arrLength;

    for(int i=0;i<arrLength;i++)
    {
      cin>>arr[i];

    }

  }




  bool IsArrayIsPalindrome(int arr[100],int arrLength)
  {

      for(int i=0;i<arrLength;i++)
     {
        if(arr[i]!=arr[arrLength-1-i])
        {

         return false  ;
        }

     }
         return true  ;

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

    int arrLength=0,arrLength2=0;
    int arr2[100];
      int arr[100];
     FillArray(arr,arrLength);


   cout<<"Array Elements:"<<endl;
        printArray(arr,arrLength);

    if(IsArrayIsPalindrome(arr,arrLength))
        cout<<"yes ,array is palindrome "<<endl;
    else
        cout<<"No ,array is not palindrome "<<endl;


    return 0;
}
