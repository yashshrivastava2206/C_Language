/* Making user defined function to set the element the string into single character */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char* stringset(char str[] , char s)
{
    int i=0;
    while(str[i]!='\0')
    {
        str[i]=(char)(s);
        i++;
    }
    //str[i]='\0';
    return str;
}
void main()
{
    char str[30],s;
    printf("Enter a String : ");
    gets(str);
    printf("Enter set element : ");
    scanf("%c",&s);
    printf("%s",stringset(str,s));
}
