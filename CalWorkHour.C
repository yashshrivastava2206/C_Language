/*Calculate working hours of person for a given age*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
printf("Enter Age Of A Person:");
scanf("%d",&age);
if(age<=0&&age<=10)
{
printf("Working Hours: 0");
}
else if(age>=11&&age<=15)
{
printf("Working Hours: 0");
}
else if(age>=16&&age<=20)
{
printf("Working Hours: 3");
}
else if(age>=21&&age<=25)
{
printf("Working Hours: 5");
}
else
{
printf("Working Hours: 8");
}
getch();
}
