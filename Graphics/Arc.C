/* WAP to dwar a Arc */
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setbkcolor(RED);
setcolor(YELLOW);
midx = getmaxx()/2;
midy = getmaxy()/2;
arc(200,200,45,90,90);
return 0;
}
