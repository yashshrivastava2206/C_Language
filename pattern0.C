/* 
WAP to input no. of rows and print the right triangle star pattern
*
**
***
****
*****
**-------n
*/
/* Solution */
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows in the patter :  ");
    scanf("%d",&n);
    printf("Pattern By For Loop:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}