/* Write a function named GetMax , that will find the maximum among array of numbers */
#include<stdio.h>
int GetMax(int a[],int n)
{
    int i,max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[20],i,n;
    printf("Enter the no. of element in array :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",GetMax(a,n));
}
