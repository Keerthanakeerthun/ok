#include<iostream>
using namespace std;
int main()
{
string str;
int count=0;
cout<<"Enter a string : "<<endl;
getline(cin,str);
for(int i=0;str[i]!='\0';i++)
{
for(int j=i+1;str[j]!='\0';j++)
{
if(str[i]==str[j])
{
count+=1;
}
}
}
if(count==0)
cout<<"Yes"<<endl;
else
cout<<"No";
return 0;
}
