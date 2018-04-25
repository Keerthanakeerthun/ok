#include<iostream>
using namespace std;
int main()
{
int N,K,a[N],c=0;
cout<<"Enter values : "<<endl;
cin>>N>>K;
cout<<"Enter the numbers : "<<endl;
for(int i=1;i<=N;i++)
{
cin>>a[i];
}
for(int i=1;i<=N;i++)
{
if((a[i]%2)!=0)
{
c++;
if(c==K)
{
cout<<"The Kth odd number is : "<<a[i]<<endl;
break;
}
}
}
if(c==0)
cout<<"There is no odd numbers"<<endl;
if(c!=0 && c<K)
cout<<"There is no Kth odd number"<<endl;
return 0;
}
