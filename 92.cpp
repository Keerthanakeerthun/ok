#include <iostream>
using namespace std;

int main()
{
   int i, N, sum=0, n;
	cout<<"Enter the count of numbers : ";
	cin>>N;
	cout<<"Enter "<<N<<" numbers :";
	for(i=0;i<N;i++)
	{
		cin>>n;
		sum=sum+n;
	}
	cout<<"Sum of all the "<<N<<" number is "<<sum;
    return 0;
           
}
