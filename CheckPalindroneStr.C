/* Check the weather the string is palindrone or not */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,len,flag=0;
    printf("Enter the String to Check:");
    scanf("%[^\n]*%c",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    printf("%s is not a palindrone");
    else
    printf("%s is a Palindrone",s);
    return 0;
}
