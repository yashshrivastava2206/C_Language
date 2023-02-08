/* WAP to print the solid inverted half diamond alphabet pattern 
     F
    EF
   DEF
  CDEF
 BCDEF
ABCDEF
 BCDEF
  CDEF
   DEF
    EF
     F
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    for(int i=5;i>=-5;i--)
    {
        char ch='A';
        for( int j=0;j<=5;j++)
        {
            if(abs(i)<=j)
            {
                printf("%c",ch);
                
            }
            else
            printf(" ");
            ch++;
        }
        printf("\n");
       
    }
    return 0;
}