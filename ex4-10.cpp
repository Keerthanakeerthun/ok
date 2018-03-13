#include<iostream>
using namespace std;

bool isPowerOf2(int num) {
   if (num == 0) return false;
  
   bool is_pow = !(num & (num-1));
   return is_pow;
}

int main() {
   int num;
   cout<<"Enter a number"<<endl;
   cin>>num;
   bool is_pow_2 = isPowerOf2(num);
   if (is_pow_2)
      cout<<num<<" is power of 2";
   else
      cout<<num<<" is not a power of 2";
   cout<<endl;
   return 0;
}
