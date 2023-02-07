/* WAP to print the alphabet inverted half pyramid pattern 
E E E E E 
D D D D
C C C
B B
A
*/
#include<stdio.h>
int main()
{
    char ch='E';
    for(int i=5;i>=1;i--)
    {
        
        for( int j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch--;
    }
    return 0;
}