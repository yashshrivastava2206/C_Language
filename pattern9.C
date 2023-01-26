/* WAP to print the solid diamond star pattern 
     *  
    * * 
   * * *
  * * * *
 * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,k;
    printf("Width of the diamond :");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        for(j=0;j<abs(i);j++)
        { 
            printf(" ");
        }
        for(k=n;k>=abs(i);k--)
        printf("* ");
        printf("\n");
    }
    return 0;
}
