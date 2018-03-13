#include <iostream>
using namespace std;

int main()
{
    int n, i, num[100], sum=0, average;

   
 for(i = 0; i < n; ++i)
    {
        cout << i + 1 << " Enter numbers: ";
        cin >> num[i];
        sum =sum + num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
