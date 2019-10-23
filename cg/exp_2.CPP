
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a Rectangle\nVivek Kumar\n17115091\n08/08/19";
	rectangle(200,4,350,300);
	getch();
	closegraph();
}