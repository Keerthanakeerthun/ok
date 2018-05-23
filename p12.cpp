#include<iostream>
using namespace std;
int main()
{
int arr[100],n,k,i,temp;
cout<<"enter the number"<<endl;
cin>>n;
cout<<"enter the k values"<<endl;
cin>>k;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<k;i++)
{
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
