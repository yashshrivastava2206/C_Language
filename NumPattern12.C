/* WAP to print the full Pyramid Number Pattern 
    1    
   321
  54321
 7654321
987654321
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
        k=i*2+1;
        for(j=n-1;j>-n;j--)
        {
            
            if(i>=abs(j))
            {
            printf("%d",k);
            --k;
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}