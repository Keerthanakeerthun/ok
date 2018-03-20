#include <iostream>
using namespace std;
int main()
{
string str;
cout<<"Enter the string : "<<endl;
cin>>str;
for(int i=0;str[i]!='\0';i++)
{
if(isdigit(str[i]))
{
cout<<str[i];
}
else
{
	cout<<"Enter valid input"<<endl";
}
}
return 0;
}
