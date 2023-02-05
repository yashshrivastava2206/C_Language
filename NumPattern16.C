/* WAP to print the inverted V Number Pattern 
     1    
    2 2   
   3   3
  4     4
 5       5
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of V pattern :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>-n;j--)
        {
            if(i==abs(j))
            printf("%d",i+1);
            else 
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}