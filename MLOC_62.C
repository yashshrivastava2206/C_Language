/*  MALLOC function  */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,i;
int  *ptr;
clrscr();
printf("Enter the size of array:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("\nEnter Elements in Array:\n");
for(i=0;i<n;i++)
printf("%d  ",*(ptr+i));
printf("\n");
ptr=realloc(ptr,10);
for(i=0;i<10;i++)
{
scanf("%d",ptr+i);
}
printf("\nEnter Elements in Array:\n");
for(i=0;i<10;i++)
printf("%d  ",*(ptr+i));
getch();
}