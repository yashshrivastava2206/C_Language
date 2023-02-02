/* WAP to print the full pyramid star pattern 
    *    
   ***   
  *****
 *******
*********
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
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
