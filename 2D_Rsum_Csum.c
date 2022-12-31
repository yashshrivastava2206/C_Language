/* P-6 Q.5 */
/* Row sum and column sum of an 2D Array */
#include<stdio.h>
int main()
{
    int arr[20][20],i,j,n,m,sumR=0,sumC=0;
    printf("Enter no. of rows: ");
    scanf("%d",&m);
    printf("Enter no. of column: ");
    scanf("%d",&n);
    printf("\nEnter the %d values in matrix: ",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe Sum Of the Row is :\n");
    for(i=0;i<m;i++)
    {
        sumR=0;
        for(j=0;j<n;j++)
        {
            sumR=sumR+arr[i][j];
        }
        printf("%d \t",sumR);

    }
    printf("\nThe Sum of the column Is: \n");
    for(i=0;i<m;i++)
    {
        sumC=0;
        for(j=0;j<n;j++)
        {
            sumC=sumC+arr[j][i];
        }
        printf("%d \n",sumC);

    }
    return 0;
}