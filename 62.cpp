
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i,c;
    cout<<"Enter The String:";
    cin>>s;


     for(i=0;i<s.length();i++)
  {
      if(s[i]=='0'||s[i]=='1')
      {
           c=1;
      }
      else
      {
          c=0;
        break;
      }
   }
   if(c=1)
   {
       cout<<"Yes";
   }
   else if(c=0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Enter valid input";
    }
    
    
    return 0;
 }
