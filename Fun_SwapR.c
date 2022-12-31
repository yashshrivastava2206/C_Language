/* Swap by call by Reference */
#include<stdio.h>
void swap(int* a, int* b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("\na : %d \nb : %d",*a,*b);
}
void main()
{
    int x,y;
    printf("Enter valule of x and y :");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
}