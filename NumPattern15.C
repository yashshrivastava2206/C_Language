/* WAP to print the solid Diamond Number Pattern 
    1    
   2 2   
  3 3 3
 4 4 4 4
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
    int i,j;
    
    for(i=4;i>=-4;i--)
    {
        for(j=4;j>=-4;j--)
        {
            if(abs(i)+abs(j)<=4 && (abs(i)+abs(j))%2==0)
            printf("%d",5-abs(i));
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}