#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"2D Rotation on given object\nVivek Kumar\n17115091\n29/8/2019";
	int a[]={100,100,200,100,175,150,100,100},i,t;
	float ang=30*3.141592/180;
	drawpoly(4,a);
	for(i=0;i<sizeof(a);i+=2)
	{
		t=a[i];
		a[i]=a[i]*cos(ang)-a[i+1]*sin(ang);
		a[i+1]=t*sin(ang)+a[i+1]*cos(ang);
	}
	drawpoly(4,a);
	getch();
	getch();
	closegraph();
	return (0);
}