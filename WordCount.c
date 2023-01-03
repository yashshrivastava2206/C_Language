/* WAP to count the number of words in a paragraph */
/*Using Recursion Function*/
#include<stdio.h>
#include<string.h>
int CountChar(char X[500],int,int);
void main()
{
    char para[500],count=0;
    printf("Enter Your Paragraph Here : ");
    gets(para);
    printf("No of character in this paragraph is : %d",CountChar(para,count,0));
}
int CountChar(char Para[],int c,int wrd)
{
    if(Para[c]=='\0')
    {
        return wrd;
    }
    else
    {
        if(Para[c]!=' ')
        wrd++;
    return CountChar(Para,c=c+1,wrd);
    }
}