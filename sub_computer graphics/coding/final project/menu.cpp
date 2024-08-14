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

        setfillstyle(SOLID_FILL, 0);
        floodfill(51 + i, 369, 15);
        setfillstyle(SOLID_FILL, 0);
        floodfill(105 + i, 310, 15);


        setfillstyle(SOLID_FILL , 1);
        line(165 + i, 305, 165 + i, 330);
        line(165 + i, 330, 230 + i, 330);
        line(230 + i, 330, 195 + i, 305);
        line(195 + i, 305, 165 + i, 305);
        floodfill(165 + i, 310, 15);

        line(160 + i, 305, 160 + i, 330);
        line(160 + i, 330, 95 + i, 330);
        line(95 + i, 330, 120 + i, 305);
        line(120 + i, 305, 160 + i, 305);
        floodfill(105 + i, 310, 15);

        /**Wheels**/
        setfillstyle(SOLID_FILL, 0);
        circle(110 + i, 370, 17);
        floodfill(110 + i, 370, 15);
        setfillstyle(SOLID_FILL, 3);
        circle(110 + i, 370, 8);
        floodfill(110 + i, 370, 15);

        setfillstyle(SOLID_FILL, 0);
        circle(240 + i, 370, 17);
        floodfill(240 + i, 370, 15);
        setfillstyle(SOLID_FILL, 3);
        circle(240 + i, 370, 8);
        floodfill(240 + i, 370, 15);

        delay(50);
        cleardevice();

        setfillstyle(SOLID_FILL , 0);
        line(0, 290, 639, 290);
        line(0, 390, 639, 390);
        floodfill(10,300,15);

        if(i > 0){
           setfillstyle(SOLID_FILL,15);
            rectangle(10,335,40,340);
            floodfill(11,337,15);
        }
        if(i > 50)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(70,335,100,340);
            floodfill(75,337,15);
        }
        if(i > 110)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(130,335,160,340);
            floodfill(140,337,15);
        }
        if(i > 170)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(190,335,220,340);
            floodfill(195,337,15);
        }
        if(i > 230)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(250,335,280,340);
            floodfill(260,337,15);
        }
        if(i < 20 or i > 290)
        {
           setfillstyle(SOLID_FILL,15);
            rectangle(310,335,340,340);
            floodfill(320,337,15);
        }
        if(i < 90 or i > 350)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(370,335,400,340);
            floodfill(375,337,15);
        }
        if(i < 120 or i > 410)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(430,335,460,340);
            floodfill(445,337,15);
        }
        if(i < 180 or i > 470)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(490,335,520,340);
            floodfill(500,337,15);
        }
        if(i < 240)
        {
            setfillstyle(SOLID_FILL,15);
            rectangle(550,335,580,340);
            floodfill(560,337,15);
        }


    }
    setfillstyle(SOLID_FILL,15);
    rectangle(550,335,580,340);
    floodfill(560,337,15);
    getch();
    closegraph();
    return 0;
}
