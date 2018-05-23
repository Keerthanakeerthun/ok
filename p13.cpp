#include<iostream>
using namespace std;
int main()
{
int num,rem,sum=0;
cin>>num;
while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem);
        num=num/10;
        
    }
cout<<sum;
return 0;
    
}
