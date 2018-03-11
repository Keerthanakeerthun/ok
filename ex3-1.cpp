#include <iostream>
using namespace std;
#include <string>
int main()
{
int len = 0;

string str;
getline(cin, str);

for (int i = 0; i < str.length(); i++)
{
    if (str[i] != ' ')
    {
        len++;
    }
}

cout <<"the length of the string without spaces"<< len;
return 0;
}
