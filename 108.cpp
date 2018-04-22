#include<iostream>
using namespace std;
int main()
{
int A,B,C,sum = 0;
cout<<"Enter the A,B and C values : "<<endl;
cin>>A>>B>>C;
sum =(C*(2*A+(C-1)*B))/2;
cout<<sum<<endl;
return 0;
}
