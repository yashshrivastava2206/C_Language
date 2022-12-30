/*Find the root of Quadratic Equation*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
double a,b,c,discriminant,root1,root2,Rpart,Ipart;
printf("Enter Cofficient Of a,b and c:");
scanf("%lf%lf%lf",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant>0)
{
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("Root1 =%lf /n Root2 =%lf",root1,root2);
}
else if(discriminant==0)
{
root1=root2=-b/(2*a);
printf("root1 = root2 = %lf",root1);
}
else
{
Rpart=-b/(2*a);
Ipart=sqrt(-discriminant)/(2*a);
printf("Real Part: %lf /n Imaginary Part: %lf",Rpart,Ipart);
}
getch();
}
