#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int N,i,r,x=0;
    cin>>N;
    for(i=0;N!=0;i++)
    {
        r=N%10;
        x=r * pow(2,i)+x;
        N/=10;
    }
    cout<<x;
    return 0;
}
