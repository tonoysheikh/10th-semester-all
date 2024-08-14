#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    setbkcolor(4);

    for (int i = 0; i < 500; i++)
    {
        int border_color = WHITE;
        int car_body_color = YELLOW;
        int window_color = BLACK;

        /***CAR BODY ******/
        line(50 + i, 370, 90 + i, 370);
        arc(110 + i, 370, 0, 180, 20);
        line(130 + i, 370, 220 + i, 370);
        arc(240 + i, 370, 0, 180, 20);
        line(260 + i, 370, 300 + i, 370);
        line(300 + i, 370, 300 + i, 350);
        line(300 + i, 350, 240 + i, 330);
        line(240 + i, 330, 200 + i, 300);
        line(200 + i, 300, 110 + i, 300);
        line(110 + i, 300, 80 + i, 330);
        line(80 + i, 330, 50 + i, 340);
        line(50 + i, 340, 50 + i, 370);

        /*** Fill CAR BODY Color ***/
        setfillstyle(SOLID_FILL, 0);
        floodfill(51 + i, 369, border_color);
        setfillstyle(SOLID_FILL, 0);
        floodfill(105 + i, 310, border_color);

        /***CAR Windows***/

        setfillstyle(SOLID_FILL , 1);
        line(165 + i, 305, 165 + i, 330);
        line(165 + i, 330, 230 + i, 330);
        line(230 + i, 330, 195 + i, 305);
        line(195 + i, 305, 165 + i, 305);
        floodfill(165 + i, 310, border_color);

        line(160 + i, 305, 160 + i, 330);
        line(160 + i, 330, 95 + i, 330);
        line(95 + i, 330, 120 + i, 305);
        line(120 + i, 305, 160 + i, 305);
        floodfill(105 + i, 310, border_color);

        /**Wheels**/
        setfillstyle(SOLID_FILL, 0);
        circle(110 + i, 370, 17);
        floodfill(110 + i, 370, border_color);
        setfillstyle(SOLID_FILL, 3);
        circle(110 + i, 370, 8);
        floodfill(110 + i, 370, border_color);

        setfillstyle(SOLID_FILL, 0);
        circle(240 + i, 370, 17);
        floodfill(240 + i, 370, border_color);
        setfillstyle(SOLID_FILL, 3);
        circle(240 + i, 370, 8);
        floodfill(240 + i, 370, border_color);

        delay(100);
        cleardevice();


    }
    getch();
    closegraph();
    return 0;
}

