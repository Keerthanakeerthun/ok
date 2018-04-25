#include <iostream>

using namespace std;

int main() 
{
   int n;
   cout<<"Enter a number  :";
	cin>>n;
  if(n>=1 && n<=26)
  {
	cout<<char(n+64);
  }
  else
  {
  cout<<"Enter number between 1 and 26 "<<endl;
  }
  
  return 0;
}
