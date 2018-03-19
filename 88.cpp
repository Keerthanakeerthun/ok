#include <iostream>
using namespace std;

int main()
{
     int num1, num2,a,b, lcm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    a = num1;
    b = num2;
    
    while(a!= b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    lcm = (num1 * num2) / a;

    cout << "LCM = " << lcm;
    return 0;
    
}
