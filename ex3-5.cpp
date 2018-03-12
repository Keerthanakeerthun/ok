#include<iostream>

using namespace std;

int main()
{
        string s;
        int len,i,count=0;
 
        cout<<"enter a string: "<<endl;
        getline(cin,s);
 
        len=s.size();
 
        for(i=0;i<len;i++)
       {
                if(s[i]>= '0' && s[i]<= '9')
                {
                        count++;
                }
       }
 
        cout<<"Total number of numeric characters in the given string is "<<count<<endl;
 
        return 0;
}
