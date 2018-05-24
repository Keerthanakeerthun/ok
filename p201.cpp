#include <iostream>

using namespace std;

unsigned long int count(unsigned int N)
{
    unsigned long int catalan[N+1];
    catalan[0]=catalan[1]=1;    
    int i,j;

    for(i=2;i<=N;i++)
    {
        catalan[i]=0;
        for(j=0;j<i;j++)
        {
            catalan[i]+=catalan[j]*catalan[i-j-1];
        }
    }
    return catalan[N];
}

int main()
{
    unsigned int n;
    cin>>n;
    unsigned long int result=count(n);
    cout<<result<<endl;
    return 0;
}
