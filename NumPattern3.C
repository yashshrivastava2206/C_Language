/* WAP to print the rectangle number pattern  
55555
44444
33333
22222
11111
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size of pattern :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}