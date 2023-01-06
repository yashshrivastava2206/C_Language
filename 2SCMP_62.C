/* user defined function for comparing two strings  of starting n characters*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int strcomp(char str1[], char str2[],int n)
{
int i=0;
while((str1[i]!='\0' || str2[i]!='\0')&& i<n)
{
if(str1[i]!=str2[i])
{

return (int)(str1[i])-(int)(str2[i]);
}
i++;
}
return 0;

}
void main()
{
int n;
char str1[30],str2[30],k;
clrscr();
printf("Enter first Strings : ");
gets(str1);
printf("Enter Second String : ");
gets(str2);
printf("Enter how many starting characters you want to compare : ");
scanf("%d",&n);
k=strcomp(str1,str2,n);
printf("k=%d\n",k);
if(k==0)
printf("Strings are Equal");
else
printf("Strings are not equal ");

getch();
}