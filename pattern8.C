/*  WAP a program to print half diamond star pattern 
*
**
***
****
*****
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=0;i<=n*2-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j&&(i+j)<=(n*2-2))
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
