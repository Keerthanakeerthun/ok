#include <iostream>
using namespace std;

int main()
{
     int K;
    float N, res= 1;

    cout << "Enter base(N) and exponent(K)values :  ";
    cin >> N >> K;

    while (K != 0)
    {
        res *= N;
        --K;
    }

    cout << res;

    return 0;
}
