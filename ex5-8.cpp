#include <iostream>
using namespace std;

int main()
{
    int num1,num2,temp;
cout<<"Enter the two numbers"<<endl;
cin>>num1>>num2;
    cout << "Numbers before swapping" << endl;
    cout << "number 1 = " << num1 << ", number 2 = " << num2 << endl;

   num1 = num1 ^ num2;  
  num2 = num1 ^ num2;  
  num1 = num1 ^ num2; 

    cout << " Numbers after swapping" << endl;
    cout << "number 1 = " << num1 << ", number 2 = " << num2 << endl;

    return 0;
}
