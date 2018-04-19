#include <iostream>
#include <string>
using namespace std;
int main()
{
string S;
int n;
cout<<"Enter the string : "<<endl;
cin>>S;
cout<<"Enter the n value : "<<endl;
cin>>n;
if(n<S.length())
cout<<S.substr(S.length()-n)<<endl;
else if(n>S.length())
{
cout<<"Enter valid number"<<endl;
}
else
cout<<"Enter valid string";
return 0;
