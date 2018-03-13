#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the two strings"<<endl;
    cin>>s1>>s2;
    if(s1.length() == s2.length()){
        cout<<s2;
    }else if(s1.length() > s2.length()){
        cout<<"Greater string is:"<<s1;
    }else{
        cout<<"Greater string is:"<<s2;
    }
    return 0;
}
