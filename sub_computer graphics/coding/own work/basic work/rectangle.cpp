#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT , gm;
    initgraph(&gd , &gm , " ");

    rectangle(20,30,150,100);


    getch();
    closegraph();

    return 0;
}
