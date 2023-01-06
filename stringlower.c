/* Making a user defined function to convert whole string into Lower Case */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char* strlower(char str[])
{
    int n,i;
    for(i=0;str[i]!='\0';i++)
    {
        n=(int)(str[i]);
        if(n>=65 && n<=90)
        {
            n=n+32;
        }
        str[i]=(char)(n);
    }
    return str;
}
void main()
{
    char str[50];
    printf("Enter String : ");
    gets(str);
    printf("%s",strlower(str));
}