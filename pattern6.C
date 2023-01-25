/* WAP to print the an inverted pyramid star pattern */
/* 
* * * * * 
 * * * *  
  * * *
   * *
    * 
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter No. of Rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n*2-i;j++)
        {
            if(j>=i&&(i+j)%2==0)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
