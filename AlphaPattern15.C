/* WAP to print the full pyramid alphabet pattern 
     A     
    BBB
   CCCCC
  DDDDDDD
 EEEEEEEEE
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='A';
    for(int i=1;i<=5;i++)
    {
        
        for( int j=5;j>=-5;j--)
        {
            if(i>abs(j))
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