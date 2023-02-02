/* WAP to print the pant's style star pattern 
*********
**** ****
***   ***
**     **
*       *
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter No . rows :");
    scanf("%d",&n);
    int lmt=n-1;
    for(i=0;i<n;i++)
    {
        for(j=lmt;j>=-lmt;j--)
        {
            if((i<=abs(j)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
