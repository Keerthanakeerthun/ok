/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    int i, max, min,N;
    cin>>N;
    int arr[N];
    for(i=1; i<=N; i++)
    {
        cin>>arr[i];
    }

    max = arr[1];
    min = arr[1];

    for(i=1; i<=N; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

    
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
           cout<<min<<" "<<max;

    return 0;
}
