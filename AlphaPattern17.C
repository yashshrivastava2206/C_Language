/* WAP to print the solid inverted half diamond alphabet pattern 
F     
FE
FED
FEDC
FEDCB
FEDCBA
FEDCB
FEDC
FED
FE    
F
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    for(int i=5;i>=-5;i--)
    {
        char ch='F';
        for( int j=5;j>=0;j--)
        {
            if(abs(i)<=j)
            {
                printf("%c",ch);
               ch--; 
            }
            else
            printf(" ");
            
        }
        printf("\n");
       
    }
    return 0;
}