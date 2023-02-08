/* WAP to print the V shape Alphabet Pattern 
E       E
 D     D 
  C   C  
   B B
    A
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='E';
    for(int i=1;i<=5;i++)
    {
        for(int j=4;j>=-4;j--)
        {
            if(i+abs(j)==5)
            printf("%c",ch);
            else
            printf(" ");
        }
        printf("\n");
        ch--;
    }
    return 0;
}