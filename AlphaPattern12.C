/* WAP to print the alphabet inverted half pyramid pattern 
ABCDE
 ABCD
  ABC
   AB
    A
*/
#include<stdio.h>
int main()
{
    
    for(int i=1;i<=5;i++)
    {
        char ch='A';
        for( int j=1;j<=5;j++)
        {
            if(i<=j)
            {
                printf("%c",ch);
                 ch++;
            }
            else
            printf(" ");
            
        }
        printf("\n");
       
    }
    return 0;
}