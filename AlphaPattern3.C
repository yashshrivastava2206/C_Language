/* WAP to print the rectangle alphabet pattern 
E E E E E 
D D D D D
C C C C C
B B B B B
A A A A A
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k='E';
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            printf("%c ",k);
        }
        printf("\n");
    k--;
    }
    return 0;
}