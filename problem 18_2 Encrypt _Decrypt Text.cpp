#include<iostream>
#include<string>
#include <cstdlib>  //FOR function random number
#include <ctime>
#include <math.h>
using namespace std;

string ReadText(string message)
{    string Text;
    cout<<message<<endl;
    getline(cin,Text);
    return Text;
}

string EncryptText( string Text,short EncryptionKey)
{

   for(int i=0;i<=Text.length();i++)
   {
      Text[i]=char((int)Text[i]+EncryptionKey) ;
   }
    return Text;
}

 string DycryptText(string Text,short EncryptionKey)
 {

     for(int i=0;i<=Text.length();i++)
   {
      Text[i]=char((int)Text[i]-EncryptionKey) ;
   }
    return Text;
 }




int main()
{
  short EncryptionKey=2;
  string  text=ReadText("Enter the TEXT,pls");
  string TextAfterEncryption=EncryptText(text,EncryptionKey);

   cout<<"Text Before Encryption :"<<text<<endl;
    cout<<"Text After Encryption :"<<TextAfterEncryption<<endl;
     cout<<"Text After Dycryption :"<<
     DycryptText(TextAfterEncryption,EncryptionKey)<<endl;



    return 0;
}
