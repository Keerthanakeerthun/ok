

#include <iostream>
using namespace std;
int main()
{
    int n=100000,N,i,j,flag,temp;
    cin>>N;
    int arr[N];
    if(N<2&&N<=n)
    {
        cout<<"No prime number"<<endl;
    }
    else
    {
    for(i=2;i<N;i++)
    {
        flag=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
    
         if(flag==0)
         {
          cout<<i<<" ";
         
         }
         
    }
        
         
    }
    
    return 0;
}
