#include <iostream>
using namespace std;

int main()
{
     int n,p,m=1;
    cin>>n>>p;
    if(p==0)
    {
        cout<<"1";
        
    }
    else
    {
        for(int i=1;i<=p;i++)
        {
            m=m*n;
        }
        cout<<m;
    }
    return 0;
    
}
