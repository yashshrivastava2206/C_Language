/* WAP to print the Half pyramid number pattern  
11111
2222
333
44
5
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size of pattern :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}