/* WAP to copy the contents of one file into another file and print the copied File*/
#include<stdio.h>
int main()
{
    FILE *p1,*p2;
    char c;
    p1=fopen("File1.txt","r");
    p2=fopen("File2.txt","w");
    while((c=fgetc(p1))!=EOF){
        fputc(c,p2);
    }
    fclose(p1);
    fclose(p2);
    p2=fopen("File2.txt","r");
    while((c=fgetc(p2))!=EOF){
        printf("%c",c);
    }
    fclose(p2);
    return 0;
}