/* WAP to print the hollow diamond alphabet pattern 
     A     
    B C
   D   E
  F     G
 H       I
J         K
 L       M
  N     O
   P   Q
    R S
     T
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
            if(abs(i)+abs(j)== 5 && abs(i)+abs(j)%2!=0)
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