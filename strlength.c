/* Making a user defined function which return the length of a string */
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int strlength(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
void main()
{
    char str[500];
    printf("Enter Your Text Here : ");
    gets(str);
    printf("%d",strlength(str));
}