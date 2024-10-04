#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>



using namespace std;




int ReadPositiveNumber()
{

   int number=0;

   cout<<"Please enter a number ?"<<endl;
   cin>>number;
  return number;

}

void  AddArrayElements(int number,int arr[100],int& arrLength)
{

       arr[arrLength]=number;
       arrLength++;

}


void InputUserNumbersInArray(int arr[100],int& arrLength)
{
    bool add=true;
   do
   {
       AddArrayElements(ReadPositiveNumber(),arr,arrLength);
      cout<<"Do you want to add more numbers?[0]No,[1]Yes?"<<endl;
       cin>>add;
   }while(add);

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


    int arr[100],arrLength=0;

   InputUserNumbersInArray(arr,arrLength);

   cout<<"Array arrLength:"<<arrLength<<endl;
   cout<<"Array Elements:";

   printArray(arr,arrLength);


    return 0;
}
