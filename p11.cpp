#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a day with first letter capital :";
    cin>>s;
    if(s=="Sunday"||s=="Saturday")
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
     
return 0;
}
