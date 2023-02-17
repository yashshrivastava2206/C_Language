/* Write a program to dwar a circle */
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
circle(midx,midy,70);
return 0;
}