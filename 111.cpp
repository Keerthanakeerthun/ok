#include<iostream>
using namespace std;
int main()
{
int num,c=0;
cout<<"Enter any num : ";
cin>>num;
while(num>0)
{
num=num/10;
c++;
}
cout<<c;
return 0;
}
