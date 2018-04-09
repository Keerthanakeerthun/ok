/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
