/*WAP to print the Full pyramid Number Pattern.
    1    
   222   
  33333
 4444444
555555555

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of pyramid:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>-n;j--)
        {
            if(i>=abs(j))
            printf("%d",i+1);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}