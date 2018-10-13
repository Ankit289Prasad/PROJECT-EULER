#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
unsigned long int f1=1,f2=1,s=0,r=0;
while(r<4000000)
{
if(r%2==0)
s+=r;
r=f1+f2;
f2=f1;
f1=r;
}
cout<<"Sum of even value in Fibonacci Series is: "<<s;
getch();
}

