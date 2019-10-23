#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"2D Scaling on given object\nVivek Kumar\n17115091\n29/8/2019";
	int a[]={100,100,200,100,175,150,100,100};
	int sx=2,sy=2,i=0;
	drawpoly(4,a);
	for(;i<8;i+=2)
	{
		a[i]*=sx;
		a[i+1]*=sy;
	}
	drawpoly(4,a);
	getch();
	getch();
	closegraph();
	return (0);
}