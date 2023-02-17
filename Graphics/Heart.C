/* WAP to dwar a Heart */   //Only runs in TURBOC3
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm;
int i,r;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setbkcolor(RED);
setcolor(YELLOW);
r=10;
for(i=0;i<71;i++)
{
arc(130,130,0,180,70-i);
arc(270,130,0,180,70-i);
line(60+i,130,200,290);
line(130+i,130,200,290);
line(340-i,130,200,290);
line(270-i,130,200,290);
}
getch();
closegraph();
}