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

     for(int i=0;i<arrLength;i++)
     {
        arr[i]=RandomNumber(1,100);

     }
 }


int FindNumberPositionInArray(int arr[100],int arrLength,int number)
 {

     for(int i=0;i<arrLength;i++)
     {
         if(arr[i]== number)


             return i;

    }
        return -1;
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

    int arr[100],arrLength=0;
    int  NumberOfSearch,PositionNumber;

  arrLength=ReadPositiveNumber("Enter number of elements for Array ?");
   GenerateArrayRandom(arr,arrLength);

   cout<<"Array 1 Elements :"<<endl;
   printArray(arr,arrLength);

   NumberOfSearch=ReadPositiveNumber("Please Enter a number to search for ?");
    cout<<"Number you are looking for is :"<<NumberOfSearch<<endl;
   PositionNumber= FindNumberPositionInArray(arr,arrLength,NumberOfSearch);

     if  (PositionNumber==-1)
    {
        cout<<"The number is not foound:-("<<endl;
    }

     else {
         cout<<"The number found at position :"<<PositionNumber<<endl;
         cout<< "The number found its order :"<<PositionNumber+1<<endl;
          }
    return 0;
}
