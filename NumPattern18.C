/* WAP to print the solid half Daimond Number Pattern 
5     
54    
543
5432
54321
543210
54321
5432
543
54
5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the Size of Daiamond pattern :");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        for(j=n;j>=0;j--)
        {
            if(abs(i)<=j)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}