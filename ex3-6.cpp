#include<iostream>

using namespace std;

int main()
{
        string s;
        int len,i,lower=0,upper=0,num=0,special=0;
 
        cout<<"enter a string: "<<endl;
        getline(cin,s);
 
        len=s.size();
 
        for(i=0;i<len;i++)
       {
                if(s[i]>= '0' && s[i]<= '9')
                {
                        num++;
                }
                else if(s[i] >= 'A' && s[i] <= 'Z')
                {
            upper++;
                }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
      
       else 
            special++;
       }
 
        cout<<"Total number of special characters in the given string is "<<special<<endl;
 
        return 0;
}
