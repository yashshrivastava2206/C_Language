/* Reverse of a number */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int Num,rem,New=0;
printf("Enter Any Number:");
scanf("%d",&Num);
while(Num>0)
{
rem=Num%10;
New=New*10+rem;
Num=Num/10;
}
printf("Reverse of a number is %d",New);
getch();
}
