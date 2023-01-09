/*  Calculate the Simple Interest */
#include<stdio.h>
int main()
{
    int principal,time;
    float rate,amount;
    printf("Enter Princical Amount : ");
    scanf("%d",&principal);
    printf("Enter Rate of Interest : ");
    scanf("%f",&rate);
    rate=rate/100;
    printf("%f",rate);
    printf("Enter Time : ");
    scanf("%d",&time);
    amount=principal+(principal*rate*time);
    printf("Amount After %d year is %f",time,amount);
    return 0;
}
