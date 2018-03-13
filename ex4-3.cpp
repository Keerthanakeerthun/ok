#include<iostream>
using namespace
void main()
{

char str1[100],str2[100];
int i=0,j=0;
cout<<"Enter first string "<<endl;
gets(str1);
cout<<"Enter second string "<<endl;
gets(str2);
while(str1[i]!='\0')
{
 i++;
}
while(str2[j]!='\0')
{
 str1[i]=str2[j];
 i++;
 j++;
}
cout<<"Resultant string is"<<str1;
getch();
}
