#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtext("My nickname draw by using line method :");
    setcolor(YELLOW);

    // Alphabet "T"
    line(75, 30, 75, 100);
    line(50, 30, 100, 30);

    // Alphabet "O"
    circle(120, 70, 25);

    // Alphabet "N"
    line(160, 30, 160, 100);
    line(160, 30, 190, 100);
    line(190, 100, 190, 30);

    // Alphabet "O"
    circle(230, 70, 25);

    // Alphabet "Y"
    line(270, 30, 290, 60);
    line(290, 60, 310, 30);
    line(290, 60, 290, 100);

    getch();
    closegraph();

    return 0;
}
