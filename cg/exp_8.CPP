#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"DDA Line Drawing Algorithm\nVivek Kumar\n17115091\n08/08/19";
	cout<<"\nEnter the value of x1 and y1 :";
	cin>>x1>>y1;
	cout<<"\nEnter the value of x2 and y2 :";
	cin>>x2>>y2;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
		step=dx;
	else
		step=dy;
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	i=1;
	while(i<=step)
	{
		putpixel(x,y,10);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(10);
	}
	getch();
	closegraph();



}