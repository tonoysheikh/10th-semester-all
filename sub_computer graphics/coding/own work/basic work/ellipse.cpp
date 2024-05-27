#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT , gm;
    initgraph(&gd , &gm , "");

    setcolor(WHITE);
    ellipse(300,250,0,360,130,80);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(251, 251, WHITE);

    getch();

    closegraph();

    return 0;
}
