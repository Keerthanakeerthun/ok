#include <iostream>

using namespace std;

int main()
{
    int i,n,a[i],min;
    cout<<"Enter the total elements  of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in  array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min = a[0];
    for(i=1;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    cout<<"minimum number  in the array  is:"<<min;

    return 0;
}
