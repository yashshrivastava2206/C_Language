/* WAP to print cross sign (X) star pattern 
*   *
 * *
  *
 * *
*   *
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter size of X :");
    scanf("%d",&n);
    for(i=n;i>=-n;i--)
    {
        for(j=n;j>=-n;j--)
        {
            if(abs(i)==abs(j))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}