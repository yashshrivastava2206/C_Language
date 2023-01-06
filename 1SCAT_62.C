#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
clrscr();

char name[30],sname[20];
printf("Enter First Name : ");
gets(name);
printf("Enter Surname : ");
gets(sname);
strcat(name," ");
strcat(name,sname);
printf("Full Name Is : %s",name);
getch();
}
