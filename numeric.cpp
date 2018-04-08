#include <iostream>

using namespace std;

 
int main()
{
   string str;
   int count;

	cout << "Enter the string : ";
	cin >> str;

	for (int i= 0; i < sizeof(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count=1;
		
		}
		else
		{
		    count=0;
		}
	}
	if(count==1)
	{
	    cout<<"Yes";
	}
	else if(count==0)
{
    cout<<"No";
}	
else
{
    cout<<"Enter valid input";
}
	

        


        
     

    return 0;
}
