#include <iostream>
using namespace std;

int main()
{
int a[100],N,i;
cout<<"Enter how many numbers";
cin>>N;
for(i=0;i<N;i++)
{
    cin>>a[i];
}
for(i=0;i<N;i++)
{
    cout<<a[i]<<" "<<i<<endl;
}

    return 0;
}
