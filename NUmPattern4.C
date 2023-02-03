/* WAP to print the rectangle number pattern  
54321
54321
54321
54321
54321
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size of pattern :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}