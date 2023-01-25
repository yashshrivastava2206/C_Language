/* WAP to print the full pyramid star pattern */
/*  
      * 
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
 */

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+i;j++)
        {
            if((i+j>=(n-1))&&((i+j)%2==0))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}