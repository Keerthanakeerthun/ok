#include <iostream>
using namespace std;

int main() {
	int i,s,e=100000,rem;
cout<<"Enter the range as positive numbers"<<endl;
cin>>s>>e;
	for(i=s; i<e; ++i){

               rem = i % 2;

               if(rem != 0)
{
           cout<<i;
}
	
	}
	

	// your code goes here
	return 0;
}
