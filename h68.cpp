#include <iostream>

using namespace std;

int main()
{

    int i, max, min,N,p=1,q=1;
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
            q=i;
        }
    }
for(i=1; i<=N; i++)
{
    
        if(arr[i] < min)
        {
            min = arr[i];
            p=i;
        }
    }

           cout<<p<<" "<<q;

    return 0;
}
