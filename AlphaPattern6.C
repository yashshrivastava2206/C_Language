/* WAP to print the right triangle Alphabet Pattern 
A 
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of pattern :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}