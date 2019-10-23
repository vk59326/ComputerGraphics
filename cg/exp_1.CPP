#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a Line\nVivek Kumar \n17115091\n08/08/19";
	line(200,200,400,200);
	getch();
	closegraph();
}