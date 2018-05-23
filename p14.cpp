#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=s.length();i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U')
        {
            cout<<s[i];
        }
    
    }

    return 0;
}
