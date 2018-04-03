#include<iostream>
using namespace std;
int main()
{
      string s;

      cin >> s;

      stringstream ss;
      ss << s;

      float num = 0;

      ss >> num;

      if(ss.good()) {
          cerr << "No Valid Number" << endl;
      }
      else if(num == 0 && s[0] != '0') {
          cerr << "No Valid Number" << endl;
      }
      else {
          cout << num<< endl;
      }  
      return 0;
      }
