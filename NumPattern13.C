/* WAP to print the Full Pyramid Number Pattern 
    1    
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of Pyramid :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>-n;j--)
        {
            if((i>abs(j))&& (i+abs(j))%2!=0)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}