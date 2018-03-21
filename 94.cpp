#include <iostream>
using namespace std;

int main()
{
   int a,i[a],n;
	cout<<"Enter the count of numbers : ";
	cin>>a;
	for(int j=0;j<a;j++)
	{
		cin>>i[j];
	}
	cout<<"Enter the position of the element";
	cin>>n;
	cout<<i[n-1];	
	
	
    return 0;
           
}
