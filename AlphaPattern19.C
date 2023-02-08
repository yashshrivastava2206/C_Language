/* WAP to print the solid  diamond alphabet pattern 
     A     
    B B    
   C C C   
  D D D D
 E E E E E
F F F F F F
 E E E E E 
  D D D D
   C C C
    B B
     A
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch='A';
    for(int i=5;i>=-5;i--)
    {
        
        for( int j=5;j>=-5;j--)
        {
            if((abs(i)+abs(j)<=5) && (abs(i)+abs(j))%2!=0)
            {
                printf("%c",ch);
                
            }
            else
            printf(" ");
            
        }
        printf("\n");
                if(i>0)
                ch++;
                else
                ch--;
    }
    return 0;
}