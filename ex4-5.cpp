#include<iostream.h>
#include<conio.h>

void main()
{
int num,count=0;
cout<<"Enter any number : <<endl";
cin>>num;
if(num>0&&num<=100000000000)
{
num=num/10;
count++;
}
cout<<"Total no. of digits in given number is: "<<count;
getch();
}
