#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    gets(s);
    int temp,i,j;
    j=strlen(s)-1;
    for(i=0;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<s;
    return 0;
}
