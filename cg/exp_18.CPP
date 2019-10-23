#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"..\\bgI");
	cout<<"Draw a House\nVivek Kumar\n17115091\n22/8/19";
	rectangle(100,150,300,300);
	line(200,25,100,150);
	line(200,25,300,150);
	rectangle(170,230,230,300);
	getch();
	closegraph();
}
