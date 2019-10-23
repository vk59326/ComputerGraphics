#include<graphics.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main()
{
	int gd=DETECT,gm;
	int tx=100,ty=150;
	int a[]={100,100,200,100,175,150,100,100};
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"2D Translation on given object\nVivek Kumar\n17115091\n29/8/2019";
	drawpoly(4,a);
	for (int i=0;i<sizeof(a);i+=2)
	{
		a[i]+=tx;
		a[i+1]+=ty;
	}
	drawpoly(4,a);
	getch();
	getch();
	closegraph();
	return (0);
}