#include<stdio.h>
int main()
{
    int num[10],Even[10],Odd[10],i,j,k;
    for(i=0;i<10;i++)
    {
        printf("\nEnter %dth number: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0,j=0,k=0;i<10;i++)
    {
        if(num[i]%2==0)
        {
            Even[j]=num[i];
            j++;
        }
        else
        {
            Odd[k]=num[i];
            k++;
        }
    }
    printf("Even Numbers are:\n");
    for(i=0;i<j;i++)
    {
        printf("%d\n",Even[i]);
    }
    printf("\n Odd Numbers are:\n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",Odd[i]);
    }
    return 0;
}
