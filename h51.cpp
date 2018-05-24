#include <iostream>

using namespace std;

int main()
{

   char s[100],s1[100];
	int a,b,i,mul=0;
	cin>>s>>s1;
    a=atoi(s);
	b=atoi(s1);

    for(i=1;i<=b;i++)
    {
        mul += a;
    }

    cout<<mul;

    return 0;
}
