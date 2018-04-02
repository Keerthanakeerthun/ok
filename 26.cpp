#include<iostream>
using namespace std;
 
int main()
{
    int i,n;
    int sum=0,a[60];
    int avg=0;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
avg=sum/n;
cout<<avg;
    
}
