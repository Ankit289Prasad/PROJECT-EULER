#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int s=0,i;
for(i=1;i<1000;i++)
{
if((i%3==0)||(i%5==0))
s+=i;
}
cout<<"Sum of multiple of 3 and 5 below 1000 is:"<<s;
getch();
}
