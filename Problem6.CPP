#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int s1=0,s2=0,res=0,i;
for(i=1;i<=100;i++)
{
s1+=i;
s2+=i*i;
}
s1*=s1;
res=s1-s2;
cout<<"Difference is "<<res;
getch();
}
