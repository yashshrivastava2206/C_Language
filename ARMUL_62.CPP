/* 2D Array input and Display */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[20][20],arr1[20][20],mul[20][20],n,i,j,k;
printf("Enter Orden of Square matrix: ");
scanf("%d",&n);
printf("\nEnter elements in 1st matrix: ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
printf("Enter elements in 2nd  matrix: ");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("\nAfter input:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d,",arr[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d,",arr1[i][j]);
}
printf("\n");
}
getch();
}