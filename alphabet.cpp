#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"enter your input"<<endl;
    cin>>c;
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    {
        cout<<c <<"  is an alphabet"<<endl;
    }
    else 
    {
        cout<<c<<" is not an alphabet "<<endl;
}
return 0;
}
