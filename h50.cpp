#include <iostream>

using namespace std;

int main()
{
     int dividend ,divisor, quotient= 0;
     cin>>dividend>>divisor;
  
   while(dividend >= divisor)
   {
      dividend = dividend - divisor;
      quotient++;
   }
   cout<<quotient;

    return 0;
}
