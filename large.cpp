#include <iostream>

using namespace std;

int main()
{
    int i,n,a[i],max;
    cout<<"Enter the total elements  of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in  array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max = a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    cout<<"Largest number in the array  is:"<<max;

    return 0;
}
