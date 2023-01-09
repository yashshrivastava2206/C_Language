/* Power() User Defined function */
#include<stdio.h>
int power(int a,int b)
{
    int i,next=1;
    for(i=1;i<=b;i++)
    {
        next=next*a;
    }
    return next;
}
void main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter exponent of a number :");
    scanf("%d",&b);
    printf("%d^%d : %d",a,b,power(a,b));
}