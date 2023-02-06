/* WAP to print the right triangle alphabet pattern 
A 
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k='A';
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%c ",k);
        }
        printf("\n");
        k++;
    }
    return 0;
}