#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"..\\BGI");
       	cout<<"Midpoint circle drawing algorithm\nVivek Kumar\n17115091\n22/8/19";
	circle(250,250,100);
	getch();
	closegraph();
}
