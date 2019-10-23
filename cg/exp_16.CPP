#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	int x,y=0,xm,ym;
	xm=getmaxx();
	ym=getmaxy();

	for(x=0;x<=xm;x+=15,y+=15)
	{
		line(0,y,xm,y);
		line(y,0,y,ym);
		//y+=15;
	}
	/*
	for(x=0;x<=xm;x+=15)
	{
		circle(xm/2,ym/2,x);
	}
	*/
	cout<<"Print graph using graphical object  ";
	cout<<"\nVivek Kumar                   ";
	cout<<"\n17115091                           ";
	cout<<"\n22/8/2019                           ";
	cout<<"\n                                    ";
	getch();
	closegraph();
	return 0;

}