#include<iostream>
using namespace std;
int main()
{
int N,K,a[N],t;
cout<<"Enter the values : "<<endl;
cin>>N>>K;
cout<<"Enter the numbers: "<<endl;
for(int i=1;i<=N;i++)
{
cin>>a[i];
}
for(int i=1;i<=N;i++)
{
for(int j=i+1;j<=N;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
if(K<N)
{
cout<<"The K th smallest element is "<<a[K]<<endl;
}
else{
cout<<"Kth smallest element doesn't exist"<<endl;
}
return 0;
}
