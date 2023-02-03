/* WAP to print the Full pyramid number Pattern 
    1    
   333   
  55555
 7777777
999999999

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter the size of Pyramid :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>-n;j--)
        {
            if(i>=abs(j))
            printf("%d",k);
            else
            printf(" ");
        }
        printf("\n");
        k+=2;
    }
    return 0;
}