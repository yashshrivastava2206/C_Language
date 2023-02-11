/* calloc() function */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int n,i;
int *ptr;
char *ptrc;
clrscr();
printf("Enter the size of array :");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
printf("Enter the %d elements :",n);
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("Elements in the array:\n");
for(i=0;i<n;i++)
printf("%d  ",*(ptr+i));
free(ptr);
ptr=NULL;
printf("Enter the %d elements :",n);
for(i=0;i<=n;i++)
{
scanf("%c",ptrc+i);
}
printf("Elements in the array:\n");
for(i=0;i<=n;i++)
printf("%c  ",*(ptrc+i));
printf("%c ",*(ptrc));
free(ptrc);
ptrc=NULL;
printf("%c ",*(ptrc+0));
getch();
}
