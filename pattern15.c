/* WAP to print hollow Diamond star pattern 
   *   
  * *
 *   *
*     *
 *   *
  * *
   *
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Enter the row :");
    scanf("%d",&n);
    int lmt=n-1;
    for(i=lmt;i>=-lmt;i--)
    {
        for(j=lmt;j>=-lmt;j--)
        {
            if(abs(i)+abs(j)==abs(lmt))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}