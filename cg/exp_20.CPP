#include <iostream.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print character on screen\nVivek Kumar\n17115091\n22/8/2019";
	settextstyle(7,0,5);
	outtextxy(100,100,"Computer Graphics");
	getch();
	closegraph();
	return 0;
}