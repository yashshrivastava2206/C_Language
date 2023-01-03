/* Sum Of 2D Array By Using Recursion */
#include<stdio.h>
int ArraySum(int X[3][3],int,int);
void main()
{
    int x[3][3],i,j,sum=0;
    printf("Enter 9 Elements in an Array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
for(i=0;i<3;i++)
{
    sum=sum+ArraySum(x,i,0);
}
printf("Sum Of Array Is %d : ",sum);
}
int ArraySum(int a[3][3], int r, int c)
{

    if(c==3)
    {
        return 0;
    }
    return a[r][c]+ArraySum(a,r,c+1);
    
}