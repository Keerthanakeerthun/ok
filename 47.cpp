#include <iostream>

using namespace std;

int main()
{
    int i,a[i],size,max,min;
    cout<<"Enter the size"<<endl;
  cin>>size;
    cout<<"Enter the elements in  array"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    max = a[0];
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(max<a[i]){
            max = a[i];
        }
    }
    cout<<"Largest number in the array  is:"<<max<<endl;
for(i=1;i>size;i++)
{
	if(min>a[i])
	{
		min=a[i];
	}
}
cout<<"Smallest number in array is:"<<min<<endl;
    return 0;
}
