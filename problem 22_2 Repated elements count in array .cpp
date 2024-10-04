#include <iostream>

using namespace std;


int ReadOfNumber(string message)
{
  int number=0;

  do{
   cout<<message<<endl;
   cin>>number;
  }while (number<=0);

  return number;

}

int ReadArrayOfElements(int arr[100],int &NumOfelement)
{
    cout<<"Enter the number of elements :"<<endl;
    cin>>NumOfelement;
   cout<<"Enter array elements :"<<endl;

    for(int i=1;i<=NumOfelement;i++)
    {

        cout<<"Element["<<i<<"]:";
        cin>>arr[i];

    }
        cout<<endl;
}


void PrintOfarray(int arr[100],int arrLength)
{

    for(int i=1;i<=arrLength;i++)
    {

        cout<<arr[i]<<" ";


    }
cout<<endl;
}

int TimesRepeated(int arr[100],int arrLength,int number)
{
    int count=0;

     for(int i=1;i<=arrLength;i++)
     {

       if(number==arr[i])
       {
           count++;
       }

     }
    return count;

}



int main()

{   int arr[100];
   int arrLength;

  ReadArrayOfElements(arr,arrLength);
 int numberOfCheck= ReadOfNumber("Enter the number you want to check :");
  cout<<"Original array :";
  PrintOfarray(arr,arrLength);
  cout<<numberOfCheck<<" "<<" is repeated "<<TimesRepeated(arr,arrLength,numberOfCheck)<<" Time(s)"<<endl;


    return 0;
}

