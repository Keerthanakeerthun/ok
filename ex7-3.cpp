#include <iostream>
using namespace std;

int main() 
	// your code goes here
{   
    int l,r,a[100];
    int n,i,count=0;
  cout<<"Enter the number to find"<<endl;
  cin>>n;
    cout<<"Enter the numbers"<<endl;
    cin>>l>>r;

    for(i=l;i<r;++i)
    {
        if(i=n)
        {
            count+=1;
            cout<<"yes"<<endl;
        }
   
    else
       {
    	cout<<"No"<<endl;
       }
    
    }
	return 0;
}
