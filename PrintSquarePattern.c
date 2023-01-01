#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k;
    printf("Enter a no. : ");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
     
    for(i=1;i<=n;i++)
      {
        for(j=1;j<=n;j++)
        {
            if((i==1||j==1)||(i==n||j==n))
            printf("* ");
            else
            printf("  ");
        }
          printf("\n");
      }
      
    return 0;
}
