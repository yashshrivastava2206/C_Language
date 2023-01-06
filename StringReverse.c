/* Making user defined function to return the reverse of any string*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char* strrever(char str[])
{
    int i=0,n;
    while(str[i]!='\0')
    {
        i++;
    }
    char str1[30];
    for(n=0;n<i;n++)
    {
        str1[n]=str[i-1-n];
        //printf("%c",str1[n]);
    }
    for(i=0;i<n;i++)
    {
        str[i]=str1[i];
    }
    return str;
}
void main()
{
    char str[30];
    printf("Enter String : ");
    gets(str);
    printf("%s",strrever(str));
}
