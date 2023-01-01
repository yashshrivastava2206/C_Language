/* Printing pattern using Loops */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size=2*n-1;
    int arr[size][size],i,j,strt,end;
    strt=0;
    end=size-1;
while(n!=0)
{  
    for(i=strt;i<=end;i++)
    {
        for(j=strt;j<=end;j++)
        {
            if(i==strt||i==end||j==strt||j==end)
            arr[i][j]=n;
        }
    }
    ++strt;
    --end;
    --n;
}

for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        printf("%d ",arr[i][j]);
    
    }
    printf(" \n");
} 
return 0;
}
