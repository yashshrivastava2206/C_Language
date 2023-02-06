/* WAP to print the rectangle alphabet pattern 
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%c",k);
        }
        printf("\n");
        k++;
    }
    return 0;
}