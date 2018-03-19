 #include <iostream>
using namespace std;

int main() {
	
    int num1,num2,res,s;
  
  cout<<"Enter the numbers"<<endl;
  cin>>num1>>num2;
   res=num1*num2;
 s=sqrt(res);
	if(s==sqrt(res))
  {
    cout<<res<<" is a perfect square";
  }
  
    
        
    else
       {
    	cout<<"No"<<endl;
       }
    
    
	return 0;
}

