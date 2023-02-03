/* WAP to print the rectangle number pattern  
11111
22222
33333
44444
55555
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size of pattern :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}