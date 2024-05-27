#include<iostream>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd =  DETECT, gm;

    initgraph(&gd, &gm, " ");

    setcolor(YELLOW);

    outtext("Assignment_02 : Make an Emoji");

    circle(300, 200, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 200, YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    circle(330, 160, 15);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(330, 160, BLACK);

    circle(265, 160, 15);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(265, 160, BLACK);

    ellipse(300, 220, 205, 335, 50, 25);
    ellipse(300, 220, 205, 335, 50, 26);
    ellipse(300, 220, 205, 335, 50, 27);
    ellipse(300, 220, 205, 335, 50, 28);
    ellipse(300, 220, 205, 335, 50, 29);
    ellipse(300, 220, 205, 335, 50, 30);

    setfillstyle(SOLID_FILL, BLACK);
    line(290, 203, 306, 203);
    line(290, 203, 298, 216);
    line(306, 203, 298, 216);
    floodfill(300, 205, BLACK);

    getch();

    closegraph();

    return 0;
}
