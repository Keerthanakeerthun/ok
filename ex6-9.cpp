#include<iostream>
using namespace std;
int main()
{
int num1,num2,res;
cout<<"Enter a number"<<endl;
cin>>num1>>num2;
res=num1-num2;
if(res%2==0)
{
cout<<res<<" is even"<<endl;
}
else{
cout<<res<<"odd";
return 0;
}
