/* WAP to print the rectangle alphabet pattern 
E D C B A 
E D C B A
E D C B A
E D C B A
E D C B A
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='E';
        for(j=1;j<=5;j++)
        {
            printf("%c ",k--);
        }
        printf("\n");
    
    }
    return 0;
}