#include<graphics.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>

int main()
{
	int gd=DETECT,gm;
	int a[]={100,100,200,100,200,300,100,300,100,100},i;
	float n=30*3.141592/180;
	initgraph(&gd,&gm,"..\\bgi");
	drawpoly(5,a);
	cout<<"2D Shearing on given object\nVivek Kumar\n17115091\n29/8/2019";
	for(i=0;i<sizeof(a);i+=2)
	{
		a[i]=50+a[i]+a[i+1]*tan(n);
	}
	drawpoly(5,a);
	getch();
	getch();
	closegraph();
	return (0);
}