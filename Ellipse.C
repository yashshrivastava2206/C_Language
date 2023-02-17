/* WAP to draw a ellipse */
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
ellipse(200,250,0,180,70,50);
return 0;
}