/* WAP to print the fibonnaci Half Pyramid Pattern 
1     
2 3
5 8 13
21 34 55 89
144 233 377 610 987

*/
#include<stdio.h>
int main()
{
    int i,j;
    int n=0,m=1,t;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                
                printf("%d ",n+m);
                t=n;
                n=m;
                m=t+m;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}