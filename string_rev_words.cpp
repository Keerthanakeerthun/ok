#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int  ch,i,j,k=0,p=0,l;
char st[50],sr[50];
cout<<"Enter the String"<<endl;
gets(st);
l=strlen(st);
  for(i=0;i<=l;i++)
  {
  if((st[i]==' ')||(st[i]=='\0'))
  {
   for(j=i-1;j>=p;j--)
   {
   sr[k]=st[j];
   k++;
   }
  sr[k]=' ';
  k++;
  p=i+1;
  }
  }
  for(i=0;i<p;i++)
  cout<<sr[i];
    return 0;
}
