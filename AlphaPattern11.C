/* WAP to print the alphabet inverted half pyramid pattern 
    A
   BB
  CCC
 DDDD
EEEEE
*/
#include<stdio.h>
int main()
{
    char ch='A'; 
    for(int i=5;i>=1;i--)
    {
        
        for( int j=1;j<=5;j++)
        {
            if(i<=j)
            {
                printf("%c",ch);
                
            }
            else
            printf(" ");
            
        }
        printf("\n");
        ch++;
    }
    return 0;
}
