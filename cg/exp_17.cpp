#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	cout<<"Print Multiple Object\nVivek Kumar\n17115091\n22/8/19";
	line(100,4,100,350);
	arc(100,175,-90,90,175);
	 line(400,4,400,350);
	arc(400,100,-90,90,95);

	getch();
	closegraph();
	return 0;
}
