
#include <iostream>
using namespace std;
int main()
{
    int N,r;
    cin>>N;
    while(N>0)
    {
        r=N%2;
        cout<<r;
        N/=2;
    }
    return 0;
}
