
#include <iostream>

using namespace std;

int main() 
{
   int A,B,C ;
   cout<<"Enter a A,B and C values witin 1000  :";
	cin>>A>> B>> C;
  if(A<=1000&&B<=1000&&C<=1000)
  {
	cout<<A*B/C;
  }
  else
  {
  cout<<"Enter numbers within 1000 "<<endl;
  }
  
  return 0;
}
