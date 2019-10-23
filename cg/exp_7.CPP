#include<graphics.h>
#include<constream.h>
#include<math.h>
#include<dos.h>
void main()
{      clrscr();
	int x,y;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	for( i=10;i<=300;i+=5)
       {        clrscr();
		cout<<"Moving Object \nVivek Kumar\n17115091\n08/08/19";
		line(0,260,650,260);
		rectangle(100+i,220,250+i,250);
		rectangle(160+i,190,190+i,220);
		line(145+i,190,205+i,190);
		line(145+i,190,130+i,220);
		line(205+i,190,220+i,220);
		circle(145+i,250,10);
		circle(205+i,250,10);
		delay(80);
       }
	getch();
	closegraph();


}