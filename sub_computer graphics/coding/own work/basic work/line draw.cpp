#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{

    int gd = DETECT , gm;
    initgraph(&gd , &gm , " ");

    //horizontal line
    setcolor(YELLOW);
    line(10,10 ,50,10);

    //vertical line
    setcolor(GREEN);
    line(30,11 ,30,50);

    getch();
    closegraph();

}

