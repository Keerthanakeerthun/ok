#include <iostream>
using namespace std;
int main()
{
string str;
int n=0;
char temp;
cout<<"Enter a  string : " <<endl;
cin>>str;
for(int i=0;str[i]!='\0';i++)
n++;
for(int i=0;i<n;++i)
for(int j=i+1;j<n;++j)
{
if(str[i]>str[j])
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
}
cout<<"In lexicographical order: " <<endl;
for(int i=0;i<n;++i)
{
cout<<str[i];
}
return 0;
}
