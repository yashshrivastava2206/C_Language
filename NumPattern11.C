/* WAP to print the full Pyramid Number Pattern 
    1    
   123
  12345
 1234567
123456789
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,k;
    printf("Enter the size of Pyramid :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=n-1;j>-n;j--)
        {
            
            if(i>=abs(j))
            printf("%d",k++);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}