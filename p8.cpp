#include<iostream>
using namespace std;
int main()
{
string S;
getline(cin,S);
for(int i=0;i<S.length();i++)
{
    if(i==0&&islower(S[i]))
    {
        S[i]=toupper(S[i]);
    }

    if(S[i]==' '&&islower(S[i+1]))
    {
        S[i+1]=toupper(S[i+1]);
    }
}
cout<<S;
return 0;
