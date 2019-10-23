#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	int x,y;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Static Object Drawing\nVivek Kumar\n17115091\n08/08/19";
	rectangle(100,220,250,250);
	rectangle(160,190,190,220);
	line(145,190,205,190);
	line(145,190,130,220);
	line(205,190,220,220);
	circle(145,250,10);
	circle(205,250,10);
	line(0,260,650,260);
	getch();
	closegraph();


}