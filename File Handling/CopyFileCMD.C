/* WAP to copy the contentd of one file to another file 
where both the files names are to be entered through command line */
#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *p1,*p2;
    char c;
    p1=fopen("argv[1]","r");
    p2=fopen("argv[2]","w");
    while((c=fgetc(p1)!=EOF)){
        fputc(c,p2);
    }
    fclose(p1);
    fclose(p2);
    return 0;
}