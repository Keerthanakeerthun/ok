#include <iostream>

using namespace std;

int main()
{
int N,arr[N],i;
cout<<"Enter the N value :"<<endl;
cin>>N;
 for(i=1;i<=N;i++)
{
         cin>>arr[i];
if(arr[i]!=i)
{
cout<<arr[i]<<endl;
break;
}
}


    return 0;
}
