/* WAP to count the no. of characters and no. of words in a file */
#include<stdio.h>
int main(){
    FILE *p1;
    char c;
    int ch=0,w=1;
    p1=fopen("File1.txt","r");
    while((c=fgetc(p1))!=EOF){
        ch++;
        if(c==' ')
        w++;
    }
    fclose(p1);
    printf("No. of Characters : %d\nNo. of Words : %d",ch,w);
    return 0;
}