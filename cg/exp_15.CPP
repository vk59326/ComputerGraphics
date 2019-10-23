#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{       clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	clrscr();
	cout<<"Print Sine and Cos wave\nVivek Kumar\n17115091\n22/8/19";
	line(100,160,500,160);
	line(100,50,100,350);
	arc(140,160,0,180,40);
	arc(220,160,-180,0,40);
	arc(300,160,0,180,40);
	arc(380,160,180,0,40);
	line(100,300,500,300);
	arc(100,300,0,90,40);
	arc(180,300,-180,0,40);
	arc(260,300,0,180,40);
	arc(340,300,180,0,40);
	arc(420,300,90,180,40);
	//circle(100,175,175);
	getch();
	clrscr();
	closegraph();
}
