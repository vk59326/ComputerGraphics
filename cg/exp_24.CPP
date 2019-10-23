#include<graphics.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main()
{
	int gd=DETECT,gm;
	int a[8]={100,100,200,100,175,150,100,100};
	int b[8],c[8];
	int xm,ym,i;
	initgraph(&gd,&gm,"..\\bgi");
	xm=getmaxx();
	ym=getmaxy();
	line(0,ym/2,xm,ym/2);
	line(xm/2,0,xm/2,ym);
	drawpoly(4,a);
	cout<<"2D Reflection of give polygon\nVivek Kumar\n17115091\n29/8/2019";
	for(i=0;i<sizeof(a)/2;i+=2)
	{
		b[i]=a[i];
		b[i+1]=ym-a[i+1];
	}
	drawpoly(4,b);
	for(i=0;i<sizeof(a)/2;i+=2)
	{
		c[i]=xm-a[i];
		c[i+1]=a[i+1];
	}
	drawpoly(4,c);
	for(i=0;i<sizeof(a)/2;i+=2)
	{
		c[i]=xm-a[i];
		c[i+1]=ym-a[i+1];
	}
	drawpoly(4,c);
	getch();
	getch();
	closegraph();
	return 0;
}