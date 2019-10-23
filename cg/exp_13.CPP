#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	clrscr();
	cout<<"Ellipse using Mid point\nVivek Kumar\n17115091\n22/8/19";
	int xc,yc,rx,ry;
	cout<<"\n Enter xc: ";
	cin>>xc;
	cout<<"\n Enter yc: ";
	cin>>yc;
	cout<<"\n Enter rx: ";
	cin>>rx;
	cout<<"\n Enter ry: ";
	cin>>ry;
	int x,y,p;
	x=0;
	y=ry;
	p=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	while((2*x*ry*ry)<(2*y*rx*rx))
	{
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		if(p<0)
		{
			x+=1;
			p+=(2*ry*ry*x)+(ry*ry);
		}
		else
		{
			x+=1;
			y-=1;
			p+=(2*ry*ry*x+ry*ry)-(2*rx*rx*y);
		}
	}
	p=((float)x+0.5)*((float)x+0.5)*ry*ry+(y-1)*(y-1)*rx*rx-rx*rx*ry*ry;
	while(y>=0)
	{
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		if(p>0)
		{
			y-=1;
			p-=(2*rx*rx*y)+(rx*rx);
		}
		else
		{
			x+=1;
			y-=1;
			p+=(2*ry*ry*x)-(2*rx*rx*y)-(rx*rx);
		}
	}
	getch();
	clrscr();
	closegraph();
}
