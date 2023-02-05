/* WAP to input the size and print the hollow Diamond Number Pattern 
    1    
   2 2   
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of Pattern :");
    scanf("%d",&n);
    int len=n-1;
    for(i=len;i>=-len;i--)
    {
        for(j=len;j>=-len;j--)
        {
            if(abs(i)+abs(j)==len)
            printf("%d",abs(j)+1);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}