#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{

    int gd = DETECT , gm;
    initgraph(&gd , &gm , " ");

    circle(120,140 ,50);

    getch();
    closegraph();

}


