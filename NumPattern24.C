/* WAP to print the hollow Half Pyramid Star Pattern 
1    
22
3 3
4  4
55555
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1 || i==j || i==5)
            printf("%d",i);
            else
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}