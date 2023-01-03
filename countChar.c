/* WAP to count the number of character in a paragraph */
#include<stdio.h>
#include<string.h>
int CountChar(char X[500],int);
void main()
{
    char para[500],count=0;
    printf("Enter Your Paragraph Here : ");
    gets(para);
    printf("No of character in this paragraph is : %d",CountChar(para,count));
}
int CountChar(char Para[],int c)
{
    if(Para[c]=='\0')
    {
        return c;
    }
    return CountChar(Para,c=c+1);
}