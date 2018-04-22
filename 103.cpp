#include<iostream>
#include<string>
using namespace std;
int main()
{
string S;
cout<<"Enter the string : "<<endl;
getline(cin,S);
for(int i=0;i<S.size();++i)
{
if(i==0)
{
if(islower(S[i]))
S[i]=toupper(S[i]);
}
else
{
if(S[i]!=' ')
{
if(isupper(S[i]))
S[i]=tolower(S[i]);
}
else
{
i++;
if(islower(S[i]))
S[i]=toupper(S[i]);
}
}
}
cout<<S<<endl;
return 0;
}
