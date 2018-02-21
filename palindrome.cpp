#include <iostream>
using namespace std;

int main() {
int num,rem,temp,rev=0;
cout<<"Enter a positive number ";
cin>>num;
temp=num;
while(num>0&&num<=1000)
{
rem=num%10;
num=num/10;
rev=rev*10+rem;
}
if(rev==temp)
{
cout<<"Palindrome";
}
else
{
cout<<"No";
}
return 0;
}
