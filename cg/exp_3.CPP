#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a Arc\nVivek Kumar\n17115091\n08/08/19";
	arc(300,200,0,90,100);
	getch();
	closegraph();
}