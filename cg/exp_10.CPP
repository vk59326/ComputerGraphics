#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Mid Point Line Drawing Algorithm\nVivek Kumar\n17115091\n08/08/19";
	cout<<"\nEnter the value of x1 and y1 :";
	cin>>x1>>y1;
	cout<<"\nEnter the value of x2 and y2 :";
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	int d=dy-(dx/2);
	 x=x1,y=y1;
	putpixel(x,y,7);
	while(x<=x2)
	{
		x++;
		if(d<0)
			d=d+dy;
		else
		{
			d+=(dy-dx);
			y++;
		}
		putpixel(x,y,7);
		delay(10);
	}
	getch();
	closegraph();



}