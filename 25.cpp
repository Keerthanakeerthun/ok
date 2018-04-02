#include<iostream>
using namespace std;
int main()
{
   int a[100],n,i,b;
   cout<<"Enter the number of elements"<<endl;
   cin>>n;
   cout<<"Enter the array elements"<<endl;
for(i=0;i<n;i++)
{
   cout<<a[i];
}
if(n%2==0)
{
  b=a[n/2]/2;
for(i=0;i<n;i++)
{
   a[i]+=b;
}
  }
if(n%2!=0)
{
   b=a[(n+1)/2]/2;
for(i=0;i<n;i++)
{
   a[i]+=b;
}
for(i=0;i<n;i++)
{
   cout<<a[i];
}
}
    return 0;
}
