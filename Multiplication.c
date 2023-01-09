/* Multiplication[mul()] User Defined function */
#include<stdio.h>
int mul(int a,int b);
void main()
{
    int a , b , c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    c=mul(a,b);
    printf("Multiplication of %d and %d is %d",a,b,c);
}
int mul(int a, int b)
{
    return a*b;
}