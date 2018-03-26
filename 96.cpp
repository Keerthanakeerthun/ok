#include <iostream>

using namespace std;

int main()
{
int n,i,c;
cout<<"Enter the number"<<endl;
cin>>n;
 for(i=2;i<n;i++)
        {
                if(n%i==0)
                {
                        c++;
                    
                }
        }
        if(c==0)
        {
                cout<<"No"<<endl;
        }
        else
        {
                cout<<"Yes";
        }        

    return 0;
}
