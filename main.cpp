//Author:
#include<iostream>

using namespace std;

int main()
{
  char letter;
  cout<<"What character do you want to know about?\n";
  cin>> letter;
  if ( letter >= 'A' && letter <= 'Z')
  {
  cout<<""<<letter<<" is an upper case letter!\n";
  }
  if ( letter >= 'a' && letter <= 'z')
  {
  cout<<""<<letter<<" is a lower case letter!\n";
  }
  else
  {
  cout<<"$?! Pssh. What are you talking about?\n";
  }
  
  cout<<"The ASCII value is: "<<(int)letter<<"";cout<<endl;

  return 0;
}
