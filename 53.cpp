
#include <iostream>

using namespace std;

 
int main()
{
    int   num, sum = 0,temp;
 
    cout << "Enter the number : ";
    cin >> num;
    temp=num;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of the digits of "
         << temp << " is " << sum;

        
     

    return 0;
}
