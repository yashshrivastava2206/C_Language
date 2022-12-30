/* Input a no. and find it is even or odd using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num;
printf("Enter A Number:");
scanf("%d",&num);
(num%2==0)?printf("Number Is Even"):printf("Number Is Odd");
getch();
}
