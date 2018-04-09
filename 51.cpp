#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    string str = to_string(num);
    for(int i = 0;i < str.length();i++){
        cout<<str[i]<<" ";
    }
    if(!cin)
    {
        cout<<"Invalid input";
    }
    return 0;
}
