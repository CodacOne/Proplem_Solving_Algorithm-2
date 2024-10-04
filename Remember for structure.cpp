#include <iostream>#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>


using namespace std;


struct Car
{
    string name;
     string brand;
      string model;
       int number;
        int year;



};

 void FillInfoCar()
 {

     Car MyCar;
     cout<<"Enter information car :"<<endl<<endl;
      cout<<"Enter brand car :"<<endl;
   getline(cin,MyCar.brand);
    cout<<"Enter model car :"<<endl;
    cin>> MyCar.model;
     cout<<"Enter name car :"<<endl;
     cin>> MyCar.name;
      cout<<"Enter number car :"<<endl;
      cin>> MyCar.number;
       cout<<"Enter year car :"<<endl;
       cin>> MyCar.year;



 }

 void PrintInfoCar()
 { Car MyCar;
     cout<<MyCar.brand<<endl;
      cout<<MyCar.model<<endl;
       cout<<MyCar.name<<endl;
        cout<<MyCar.number<<endl;
         cout<<MyCar.year<<endl;


 }

void InfoCar()
{
     FillInfoCar();
     PrintInfoCar();

}


int main()
{
    cout << "Hello world!" << endl;
       InfoCar();
    return 0;
}
