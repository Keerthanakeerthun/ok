#include<iostream>
using namespace std;
int main ()
{
    int M,N,sum;
    cout<<"enter the two numbers :";
    cin>>M>>N;
    sum=M+N;
    cout<<sum;
    if(sum%2==0)
    {
        cout<<"Even";
    }
    else if(sum%2==1)
    {
        cout<<"odd";
    }
    else
    {
        cout<<"Enter valid input";
    }

    
    return 0;
}
