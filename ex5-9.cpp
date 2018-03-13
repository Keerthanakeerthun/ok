#include <iostream>

using namespace std;

int main()
{
    int i,num,a[i],large;
    cout<<"Enter the total elements  of the array"<<endl;
    cin>>num;
    cout<<"Enter the elements in  array"<<endl;
    for(i=0;i<num;i++){
        cin>>a[i];
    }
    large = a[0];
    for(i=1;i<num;i++){
        if(large<a[i]){
            large = a[i];
        }
    }
    cout<<"Largest number in the array  is:"<<large;

    return 0;
}
