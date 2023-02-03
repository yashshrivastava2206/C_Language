/* WAP to print the inverted Half pyramid number pattern  
12345
 1234
  123
   12
    1
*/
#include<stdio.h>
int main()
{
    int num=1;
    int i,j,n;
    printf("Enter size of pattern :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            printf("%d",num++);                 // printf("%d",j-i+1);
            else
            printf(" ");
        }
        printf("\n");
        num=1;
    }
    return 0;
}