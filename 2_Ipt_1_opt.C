/*Read two numbers and an operator which perform the specified operationand display the result */
#include<stdio.h>
#include<conio.h>
void main()
{ 
clrscr();
int num1,num2,opt;
printf("Enter First number:");
scanf("%d",&num1);
printf("Enter Second number:");
scanf("%d",&num2);
printf("Operation Perform From A to B\n");
printf("\n Press 1 For Addition\n Press 2 for substraction\n Press 3 for Multiplication \n Press 4 for Division\nEnter Your Choice to perform operation:");
scanf("%d",&opt);
switch(opt)
{
case 1:
{
printf("Addition Of two number is:%d",num1+num2);
break;
}
case 2:
{
printf("Subtraction Of two number is:%d",num1-num2);
break;
}
case 3:
{
printf("Multiplication Of two number is:%d",num1*num2);
break;
}
case 4:
{
printf("Division Of two number is:%d",num1/num2);
break;
}
default:
printf("Wrong Choice");
}
getch();
}
