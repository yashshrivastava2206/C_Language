/* Returning multiple values by a Function */
/* Question.. WAP which will return the max and min value from a set of numbers */
#include<stdio.h>
void FindMinMax(int x[],int len,int *p1,int *p2)
{
    int i,temp,min,max;
    min=max=x[0];
    for(i=0;i<len;i++)
    {
        if(x[i]>max)
        max=x[i];
        if(x[i]<min)
        min=x[i];
    }
    *p1=min;
    *p2=max;
    
}
void main()
{
    int arr[10],i,min,max;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    FindMinMax(arr,10,&min,&max);
    printf(" Min value : %d\n Max value : %d",min,max);
}