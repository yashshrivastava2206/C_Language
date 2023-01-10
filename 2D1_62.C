/* 2D Array input and Display */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5][3],i,j;
printf("Enter elements in 5*3 matrix: "); //Input message
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("\nAfter input:\n");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
printf("%d,",arr[i][j]);
}
printf("\n");
}
getch();
}
