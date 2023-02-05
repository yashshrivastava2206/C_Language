/* WAP to print the full inverted pyramid number Pattern 
5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the Size of Inverted Pyramid:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=n-1;j>-n;j--)
        {
            if(i>abs(j) && (i+abs(j))%2!=0)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}