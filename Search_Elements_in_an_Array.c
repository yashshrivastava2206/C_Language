#include<stdio.h>
int main()
{
    int num[10],i,n,search;
    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %dth Number: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n Enter a no. you want to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(num[i]==search)
        {
            printf("\n Searching number is in %d position",i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Searching no. is not in this list:");
    }
    return 0;
}
