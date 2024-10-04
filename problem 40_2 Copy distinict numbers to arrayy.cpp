#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <math.h>



using namespace std;

void  AddArrayElements(int number,int arr2[100],int& arrLength2)
{
      arr2[arrLength2] =number;
      arrLength2++;
}



 void FillArray(int arr[100],int& arrLength)
  {
      arrLength=10;
   arr[0]=10;
    arr[1]=10;
     arr[2]=10;
      arr[3]=50;
       arr[4]=50;
        arr[5]=70;
         arr[6]=70;
          arr[7]=70;
           arr[8]=70;
            arr[9]=90;
  }

short FindNumberPositionInArray(int number,int arr2[100],int arrLength)
{
    for(int i=0;i<arrLength;i++)
    {

        if(arr2[i]==number)

        return 1;

    }
    return -1;
}

  bool IsNumberInArray(int number,int arr2[100],int arrLength)
  {

   return   FindNumberPositionInArray(number,arr2,arrLength)!=-1;

  }


  void CopyDistinctNumbers(int arr[100],int arr2[100]
                                     ,int arrLength,int& arrLength2)
{
    for(int i=0;i<arrLength;i++)

    {
        if(!IsNumberInArray(arr[i],arr2,arrLength))
        {
              AddArrayElements(arr[i],arr2,arrLength2);
        }
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

    int arrLength=0,arrLength2=0;
    int arr2[100];
      int arr[100];
     FillArray(arr,arrLength);

    CopyDistinctNumbers(arr,arr2,arrLength,arrLength2);




   cout<<"Array 1 Elements:"<<endl;
        printArray(arr,arrLength);

    cout<<"Array 2 Distinct numbers:"<<endl;
   printArray(arr2,arrLength2);


    return 0;
}
