#include <iostream>
using namespace std;
int main()
{
string s;
int i,c=0;
cin>>s;
for(i=0;i<s.length();i++)
{
    if(s[i]>='0'&&s[i]>='9')
    {
        c=1;
        break;
    }
    else
    c=1;
}
if(c==1)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}
return 0;
}
