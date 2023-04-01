/* Write a program to read a line of text containing a series of words from the terminal */
#include<stdio.h>
#include<string.h>
int main()
{
    char text[20],character,c=0;
    printf("Enter a string :");
    do{
        character=getchar();
        text[c]=character;
        c++;
    }while(character !='\n');
    printf("%s",text);
    return 0;
}