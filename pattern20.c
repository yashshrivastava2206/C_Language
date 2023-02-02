/* WAP to rint the Hollow half pyramid star pattern 
*   
**  
* *
****
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter length / width of a right angle triangle :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==1) || i==n || i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}