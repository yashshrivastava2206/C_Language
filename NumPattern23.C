/* WAP to print a butterfly shape Number Pattern 
1     7
12   67
123 567
1234567
123 567
12   67
1     7
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    for(i=3;i>=-3;i--)
    {k=1;
        for(j=3;j>=-3;j--)
        {
            if(abs(i)<=abs(j))
            printf("%d",k);
            else
            printf(" ");
            k++;
        }
        printf("\n");
    }
    return 0;
}