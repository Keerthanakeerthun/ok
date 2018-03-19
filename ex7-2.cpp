#include <iostream>
using namespace std;

int main() {
	// your code goes here
{   
    char s[100];
    int n,i,count=0;
    cout<<"Enter any string"<<endl;
    cin>>s;
    n=strlen(s);
    for(i=0;i<n;++i)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
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
