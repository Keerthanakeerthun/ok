#include<iostream>
using namespace std;
int main()
{
int N,K,a[N],count=0;
cout<<"Enter the total "<<endl;
cin>>N>>K;
cout<<"Enter the numbers: "<<endl;
for(int i=1;i<=N;i++)
{
cin>>a[i];
if(a[i]==K)
count++;
}
if(count!=0)
cout<<count<<endl;
else
cout<<"No"<<endl;
return 0;
}
