/* Write a program to print the solid inverted half diamond star pattern
     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,j,i;
    printf("Enter to row :");
    scanf("%d",&n);
    int uprlmt=n-1;
    for(i=uprlmt;i>-n;i--)
    {
        for(j=0;j<n;j++)
        {
            if(j>=abs(i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}