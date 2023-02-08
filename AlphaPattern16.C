/* WAP to print the full  inverted pyramid alphabet pattern 
 EEEEEEEEE 
  DDDDDDD
   CCCCC
    BBB
     A     
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='E';
    for(int i=5;i>=1;i--)
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
       ch--;
    }
    return 0;
}