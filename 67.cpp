
    #include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,res,c;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i = 1; i < num; i++)
    {
        res = 10*i;
        if(num < res&& num<10000)
        {
            cout<<res;
            break;
        }
        else
            {
               c=1;
            }
    }
    if(c=1)
    {
     cout<<"Enter valid input";
    }
    return 0;
}
