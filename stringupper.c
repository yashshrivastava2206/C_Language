/*Making a user defined function to convert whole string into Upper Case */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char* strupper(char str[])
{
    int n,i;
    for(i=0;str[i]!='\0';i++)
    {
        n=(int)(str[i]);
        if(n>=97 && n<=122)
        {
            n=n-32;
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
    printf("%s",strupper(str));
}