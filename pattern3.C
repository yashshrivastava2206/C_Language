/* WAP to print the mirrored right triangle star pattern */
/*
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no of row/column :");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}