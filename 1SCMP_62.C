/* user defined function for comparing two strings */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int strcomp(char str1[], char str2[])
{
int i=0;
while(str1[i]!='\0' || str2[i]!='\0')
{
if(str1[i]!=str2[i])
{
return int(str1[i])-int(str2[i]);
}
i++;
}
return 0;

}
void main()
{
char str1[30],str2[30],k;
clrscr();
printf("Enter first Strings : ");
gets(str1);
printf("Enter Second String : ");
gets(str2);
k=strcomp(str1,str2);
printf("k=%d",k);
if(k==0)
printf("Strings are Equal");
else
printf("Strings are not equal ");

getch();
}