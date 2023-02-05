/* WAP to printthe solid inverted half diamond number pattern 
     5
    45
   345
  2345
 12345
012345
 12345
  2345
   345
    45
     5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size or inverted diamond pattern :");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        for(j=0;j<=n;j++)
        {
            if(j>=abs(i))
            printf("%d",j);
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}