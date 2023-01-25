/* WAP to input no. of rows and print the right triangle star pattern. */
/*  
******-----n
|
*****
****
***
**
*
*/
// solution
#include<stdio.h>
int main()
{
    int n ,i,j;
    printf("Enter no of row/column :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
