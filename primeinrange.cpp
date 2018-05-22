#include <iostream>
using namespace std;
int main()
{
    int num1,num2,i,j,flag,count=0;
    cin>>num1>>num2;
    if(num1<2)
    {
        cout<<"No prime number"<<endl;
    }
    else
    {
    for(i=num1;i<=num2;i++)
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
        count++;
          }
     }
    }
            
   
    cout<<"\n"<<count<<endl;
    return 0;
}
