#include <iostream>

using namespace std;

int main()
{
    string s;
    char ch;
    int i,j,c=0,m=0,n;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        
        {
            if(s[i]==s[j])
            {
                c++;
            }
            if(c>m)
            {
                m=c;
                ch=s[i];
            }
        }
           
    }
 cout<<ch;
    return 0;
}
