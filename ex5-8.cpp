#include <iostream>
using namespace std;

int main()
{
    int n1,n2,temp;
cout<<"Enter the two numbers"<<endl;
cin>>n1>>n2;
    cout << "Numbers before swapping" << endl;
    cout << "number 1 = " << n1 << ", number 2 = " << n2 << endl;

   n1 = n1 ^ n2;  
  n2 = n1 ^ n2;  
  n1 = n1 ^ n2; 

    cout << " Numbers after swapping" << endl;
    cout << "number 1 = " << n1 << ", number 2 = " << n2 << endl;

    return 0;
}
