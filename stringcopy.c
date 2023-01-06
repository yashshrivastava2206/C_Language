/* user defined function string copy */
#include<stdio.h>
#include<ctype.h>
void strcopy(char str1[],char str2[])
{
    int i;
    for(i=0;str2[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("%s",str1);
}
void main()
{
    char str1[30],str2[15];
    printf("Enter First String : ");
    gets(str1);
    printf("Enter Second String : ");
    gets(str2);
    strcopy(str1,str2);
}