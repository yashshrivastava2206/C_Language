/* WAP to print inverted V star pattern 
    *    
   * *
  *   *
 *     *
*       *
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter no. of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=(n-1);j>-n;j--)
        {
            if(i==abs(j))
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}