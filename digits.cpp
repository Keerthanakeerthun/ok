#include <iostream>
using namespace std;

int main()
{
int num,i=0;
cout<<"Enter a number"<<endl;
cin>>num;
while(num>0)
{
num=num/10;
i++;
}
cout<<"total number of digits is  "<<i;
return 0;
}
