#include<graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

int main()
{
	int gd=DETECT,gm;
	int tx=100,ty=100,i,t;
	float n=30*3.141592/180;
	int a[8]={100,100,200,100,175,150,100,100};
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"3D Composite transformation on given object\nVivek Kumar\n17115091\n29/8/2019";
	drawpoly(4,a);
	for (i=0;i<sizeof(a)/2;i+=2)
	{
		a[i]+=tx;
		a[i+1]+=ty;
	}
	for (i=0;i<sizeof(a)/2;i+=2)
	{
		t=a[i];
		a[i]=a[i]*cos(n)-a[i+1]*sin(n);
		a[i+1]=t*sin(n)+a[i+1]*cos(n);
	}
	drawpoly(4,a);
	getch();
	getch();
	closegraph();
	return (0);
}