/* WAP to print the alphabet inverted half pyramid pattern 
E D C B A 
E D C B
E D C
E D
E
*/
#include<stdio.h>
int main()
{
    
    for(int i=5;i>=1;i--)
    {
        char ch='E';
        for( int j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch--;
        }
        printf("\n");
        
    }
    return 0;
}