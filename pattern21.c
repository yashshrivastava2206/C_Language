/* WAP to print hollow rectangle star pattern 
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter size of rectangle:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}