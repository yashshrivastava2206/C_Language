/* copy first n character of string 2 to string 1 */
/* User Defined Function */
#include<stdio.h>
#include<ctype.h>
void strncopy(char str1[],char str2[],int n)
{
    int i;
    for(i=0;str2[i]!='\0'&&i<n;i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("%s",str1);
}
void main()
{
    int num;
    char str1[30],str2[30];
    printf("Enter First String : ");
    gets(str1);
    printf("Enter Second String : ");
    gets(str2);
    printf("Enter n :");
    scanf("%d",&num);
    strncopy(str1,str2,num);
}