/* WAP to print butterfly shape star pattern 
*     *
**   **
*** ***
*******
*** ***
**   **
*     *
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Size of butterfly pattern :");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        for(j=n;j>=-n;j--)
        {
            if(abs(i)<=abs(j))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}