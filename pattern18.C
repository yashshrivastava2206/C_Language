/*  WAP to print the double pyramid star pattern 
****** 
*****  
****   
***
**
*
**
***
****
*****
******
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=5;i>=-5;i--)
    {
        for(j=0;j<=6;j++)
        {
            if(abs(i)>=j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}