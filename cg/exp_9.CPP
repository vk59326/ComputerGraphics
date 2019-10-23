#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	float x,y,x2,y2,x1,y1,dx,dy,p;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Bresenham's Line Drawing Algorithm\nVivek Kumar\n17115091\n08/08/19";
	//cout<<"\nEnter the value of x1 and y1 :";
	//cin>>x0>>y0;
	//cout<<"\nEnter the value of x2 and y2 :";
	//cin>>x1>>y1;
	x1=100;y1=100;x2=250;y2=200;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;
	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,7);
			delay(10);
			y+=1;
			p=p+2*dy-2*dx;
		}
		else
		{
			putpixel(x,y,7);
			delay(10);
			p+=2*dy;
		}
		x=x+1;

	}
	getch();
	closegraph();


}