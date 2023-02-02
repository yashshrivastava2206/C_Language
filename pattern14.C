/* Write a program to print the V star pattern 
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
    printf("Enter the row :  ");
    scanf("%d",&n);
    int lmt=n-1;
    for(i=lmt;i>=0;i--)
    {
        for(j=lmt;j>=-lmt;j--)
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