/* WAP to print the alphabet inverted half pyramid pattern 
A A A A A 
B B B B
C C C
D D
E
*/
#include<stdio.h>
int main()
{
    char ch='A';
    for(int i=5;i>=1;i--)
    {
        
        for( int j=1;j<=i;j++)
        {
            printf("%c ",ch);
            
        }
        printf("\n");
        ch++;
    }
    return 0;
}