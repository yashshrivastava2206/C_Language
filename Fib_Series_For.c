/* Fibonacci Series */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a,b,c;
a=0;b=1;
printf("Fibonnaci series on n numbers:");
scanf("%d",&n);
printf("0,1,");
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d,",c);
a=b;
b=c;
}
getch();
}
