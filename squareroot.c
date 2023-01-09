/* SquareRoot(sqroot()) user defined function */
#include<stdio.h>
int sqroot(int);
void main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("Square root of %d is %d",num,sqroot(num));
}
int sqroot(int n)
{
    int i=0;
    while(i*i!=n)
    {
       i=i+1;
    }
    if(i*i==n)
    {
        return i;
    }
    printf("Perfect square root doesn't exist ");
    return 0;

}