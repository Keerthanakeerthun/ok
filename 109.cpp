#include <iostream>

using namespace std;

int main()
{
    int i,a[10],max;
    cout<<"Enter the 10 elements  of the array"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    max = a[0];
    for(i=1;i<10;i++){
        if(max<a[i]){
            max = a[i];
        }
    }
    cout<<"Largest number in the array  is:"<<max;

    return 0;
}
