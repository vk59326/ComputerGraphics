#include <iostream.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print a polygon\nVivek Kumar\n17115091\n22/8/2019";
	int a[]={100,100,200,100,350,300,150,250,200,150,100,100};
	drawpoly(6,a);
	getch();
	closegraph();
	return 0;
}