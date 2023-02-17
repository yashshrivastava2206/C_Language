/* WAP to dwar a polygon */
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int points[]={200,150,300,250,350,150,200,150};
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setbkcolor(RED);
setcolor(YELLOW);
midx = getmaxx()/2;
midy = getmaxy()/2;
drawpoly(4,points);
return 0;
}