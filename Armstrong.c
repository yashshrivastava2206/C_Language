/* Armstrong Number */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n,rem,count=0,oriN,nw=0;
printf("Enter no. for checking no. is armstrong no or not:");
scanf("%d",&n);
oriN=n;
while(oriN != 0)
{
count++;
oriN=oriN/10;
}
oriN=n;
while(oriN !=0)
{
rem=oriN%10;
nw=nw+pow(rem,count);
oriN=oriN/10;
}
if(nw==n)
{
printf("No.Is Armstrong");
}
else
printf("No. Is Not Armstrong");
getch();
}