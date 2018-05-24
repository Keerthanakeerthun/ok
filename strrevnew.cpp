#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[100],temp;
    int i,j,len;
    cout<<"Enter any string:\n";
    gets(a);
    len=strlen(a);
 
    cout<<"Reverse of the string is: ";
 
     for(i = len; i > -1; i--)
     
     {
        
        cout <<a[i];
      }
    return 0;
}
