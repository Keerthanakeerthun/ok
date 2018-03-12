#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	int k;
	cout<<"Enter the number of times to repeat the string"<<endl;
	cin>>k;
	cout<<"Enter the string"<<endl;
	cin>>s;
	for(int i=1;i<=k;i++)
	{
		cout<<s;
	}
	return 0;
}
