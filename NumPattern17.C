/* WAP to print the V shape Number Pattern 
5       5
 4     4 
  3   3
   2 2
    1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of V pattern :");
    scanf("%d",&n);
    int len=n-1;
    for(i=len;i>=0;i--)
    {
        for(j=len;j>=-len;j--)
        {
            if(i==abs(j))
            printf("%d",i+1);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}