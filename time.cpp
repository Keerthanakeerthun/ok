#include <iostream>
using namespace std;
int main()
{
	
int time = 0,minutes = 0,hours = 0;



cout<<"Enter time in minutes:"<<endl;
cin>>time;

minutes = time % 60;
hours = (time - minutes) / 60; 
cout<<"Total minutes is "<<time<<endl;
cout<<hours<<" hours"<<minutes<<" minutes"<<endl;

	return 0;
}
