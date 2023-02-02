/* WAP to print the Inverted Full Pyramid star patter 
*******
 *****
  ***
   *s
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter the row no. :");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>-n;j--)
        {
            if(i>=abs(j))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}