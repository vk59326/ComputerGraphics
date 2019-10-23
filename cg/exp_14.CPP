#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <graphics.h>

void draw(int xc,int yc,int x,int y)
{
	outtextxy(xc+x,yc+y,"@");
	outtextxy(xc-x,yc+y,"@");
	outtextxy(xc-x,yc-y,"@");
	outtextxy(xc+x,yc-y,"@");
	outtextxy(xc+y,yc+x,"@");
	outtextxy(xc+y,yc-x,"@");
	outtextxy(xc-y,yc-x,"@");
	outtextxy(xc-y,yc+x,"@");
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	settextstyle(1,0,1);
	int a=100,b=100;
	cout<<" Print polygon using symbols\n Vivek Kumar\n 17115091\n 22/8/2019";
	for(;a<500;a+=10)
	{
		outtextxy(a,b,"*");
	}
	int xc=300,yc=300,r=150;
	int x=0,y=r;
	int d=3-2*r;
	draw(xc,yc,x,y);
	while(x<=y)
	{
		x+=15;
		if(d>0)
		{
			y-=15;
			d=d+4*(x-y)+10;
		}
		else
		{
			d=d+4*x+6;
		}
		draw(xc,yc,x,y);
	}
	getch();
	closegraph();
	return 0;
}