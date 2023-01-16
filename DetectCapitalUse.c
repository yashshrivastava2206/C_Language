#include<stdio.h>
#include<ctype.h>
#include<string.h>

int detectCapitalUse(char * word){
    int count=0,i;
    printf("%d\n",strlen(word));

    for(i=0;*(word+i)!='\0';i++)
    {
        if(isupper(*(word+i)))
        {
            count++;
        }
    }
    if((strlen(word)==count)||(isupper(*(word))&&count==1)||count==0)
    return 1;
    else
    return 0;

}
void main()
{
    int a;
    char str[10];
    scanf("%s",&str);

    a=detectCapitalUse(str);
    printf("%d",a);

}