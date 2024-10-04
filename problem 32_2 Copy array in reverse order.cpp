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


void AfterInverseArray(int arr[100], int arrInverse[100],int arrLength)
{
    int Jocker=arrLength;
   for(int i=1;i<=arrLength;i++)
   {
       arrInverse[i]=arr[Jocker];
       Jocker--;
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
    int arrInverse[100];

  arrLength=ReadPositiveNumber("Enter number of elements :");

   GenerateArrayRandom(arr,arrLength);

    cout<<"Array elements before Inverse :"<<endl;
   printArray(arr,arrLength);

   AfterInverseArray(arr,arrInverse,arrLength);

    cout<<"Array elements After Inverse :"<<endl;
   printArray(arrInverse,arrLength);



    return 0;
}
