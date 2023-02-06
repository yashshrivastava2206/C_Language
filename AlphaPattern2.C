/* WAP to print the rectangle alphabet pattern 
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            printf("%c ",k++);
        }
        printf("\n");

    }
    return 0;
}