/* Sum of digits*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int digit,sum=0,rem;
printf("Enter a number:");
scanf("%d",&digit);
while(digit>0)
{
rem=digit%10;
sum=sum+rem;
digit=digit/10;
}
printf("Sun Of Digit of a no. %d",sum);
getch();
}
