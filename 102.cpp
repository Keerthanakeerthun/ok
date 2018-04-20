
#include <iostream>

using namespace std;
int main() 
{
int num,i,num1,rem;	
cout<<" Enter a number:";
cin>>num;
while(num!=1)
{
rem=num%2;
num1=num/2;
cout<<num1;
num=rem;
break;
}
return 0;
}
