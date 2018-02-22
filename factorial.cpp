
#include <iostream>
using namespace std;
int main()
{
  int num,i,fact=1;
  cout<<"Enter a  positive number"<<endl;
  cin>>num;
  if(num==0||num==1)
  {
  	cout<<"The factorial of "<<num<<" is 1"<<endl;
  }
  for(i=2;i<=num;i++)
  {
  	fact=fact*i;
  }
  cout<<"The factorial of "<<num<<"is "<<fact<<endl;
  
 
  return 0;
}
  
