
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,res;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i = 1; i < num; i++){
        res = pow(2,i);
        if(num < res)
        {
            cout<<res;
            break;
                    }
        else
        {
            cout<<"Enter valid input";
        }
    }
    return 0;
}
