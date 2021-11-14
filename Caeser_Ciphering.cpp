#include<iostream>
#include<string.h>

using namespace std;
string encrypt(string text,int s)
{
   string result=" ";
   for(int i=0;i<text.length();i++)
   {
      if(isupper(text[i]))
      result += char(int(text[i]+s-65)%26+65);
      else
      result += char(int(text[i]+s-97)%26+97);
   }
   return result;
}
int main()
{
	string text;
	int s;
	cout<<"\t\t\t CAESAR CIPHER \t\t\t";
	cout<<"\nEnter the string of your choice: ";
	cin>>text;
	cout<<"Enter the position by which you want cipher the text: ";
	cin>>s;
	cout<<"The text after being ciphered : "<<encrypt(text,s);
	cout<<"\n\n";
	return 0;
}
