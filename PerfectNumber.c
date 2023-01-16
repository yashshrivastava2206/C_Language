
#include<stdio.h>
int checkPerfectNumber(int num){
    int i,sum=0;
    for(i=1;i<=(num/2);i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
    return 1;
    else
    return 0;


}
void main()
    {
        int num,k;
        printf("Enter a Number :");
        scanf("%d",&num);
        k=checkPerfectNumber(num);
        if(k==1)
        printf("Perfect Number ");
        else
        printf("Not Perfect Number :");
    }