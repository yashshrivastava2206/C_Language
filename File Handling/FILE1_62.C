#include<stdio.h>
#include<conio.h>
int main()
{
FILE *p;
char ch;
// clrscr();
printf("Enter Something:");
p=fopen("First","w");
while((ch=getchar())!=EOF)
{
putc(ch,p);
}
fclose(p);
p=fopen("First","r");
while((ch=getc(p))!=EOF)
{
printf("%c",ch);
}
fclose(p);
getch();
}