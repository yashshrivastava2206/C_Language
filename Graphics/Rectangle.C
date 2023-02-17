/* WAP to draw a rectangle */
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
rectangle(200,200,400,350);
return 0;
}