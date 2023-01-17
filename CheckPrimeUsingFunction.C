#include<stdio.h>
int isPerfectSquare(int num){
    long int i,count=0;
    for(i=0;(i*i)<=num;i++)
    {
        if((i*i)==num)
        count++;
    }
    return count;

}
void main()
{
    int num,k;
    printf("Enter a number to check that it is prime or not : ");
    scanf("%d",&num);
    k=isPerfectSquare(num);
    if(k==0)
    printf("Prime");
    else
    printf("Not Prime ");
}
