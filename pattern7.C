/* WAP to print a square star pattern 
*****
*****
*****
*****
*****
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no. of row in a sqaure matrix :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}