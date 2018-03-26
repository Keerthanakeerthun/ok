#include <iostream>
using namespace std;
int main()
{
    int num,temp, rem,n=1,i;
    
    cout << " Enter a number: ";
    cin >> num;
   temp = num;
    for(i=num;i>0&&i<=100000000000;i=i/10)
    {
        rem = i % 10;
        n = n*rem;
    }
    cout << n << endl;
}
