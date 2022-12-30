/* Check the numberis prime or not */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,i,count=0;
printf("Enter no. you want to check prime or not:");
scanf("%d",&p);
for(i=2;i<=(p/2);i++)
{
if(p%i==0)
{
count++;
}
}
if(count==0)
{
printf("%d is a prime number..",p);
}
else
printf("%d is not a prime number..",p);
getch();
}
