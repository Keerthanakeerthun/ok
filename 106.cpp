#include <iostream>

using namespace std;

int main() 
{
   int N ;
   cout<<"Enter a number  :";
	cin>>N;
  if(N>=1 && N<=26)
  {
	cout<<char(N+64);
  }
  else
  {
  cout<<"Enter number between 1 and 26 "<<endl;
  }
  
  return 0;
}
