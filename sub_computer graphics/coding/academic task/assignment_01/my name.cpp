#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include<iostream>
using namespace std;
int main(void)
{
    int xmax, ymax, x, y, i = 0, j = 0, k = 0, m = 0, s = 0, h = 0, m1 = 0;
    float l = 0.0;
    int graphic_driver = DETECT, graphic_mode;
    initgraph(&graphic_driver, &graphic_mode, "//turboc3/bgi");
    xmax = getmaxx();
    ymax = getmaxy();
    x = xmax / 2;
    y = ymax / 2;
    setcolor(15);
    setbkcolor(0);
    rectangle(x + 150, y - 200, x + 300, y - 170);
    line(x + 200, y - 200, x + 200, y - 170);
    line(x + 250, y - 200, x + 250, y - 170);
    circle(x, y, 179);
    circle(x, y, 180);
    setfillstyle(0, 0);
    floodfill(x, y, 0);
    settextstyle(1, 0, 4);
    outtextxy(x - 200, y - 25, "9");
    outtextxy(x + 186, y - 25, "3");
    outtextxy(x - 20, y - 220, "12");
    outtextxy(x - 10, y + 176, "6");
    outtextxy(x + 90, y - 195, "1");
    outtextxy(x + 165, y - 120, "2");
    outtextxy(x + 155, y + 80, "4");
    outtextxy(x + 86, y + 152, "5");
    outtextxy(x - 109, y + 148, "7");
    outtextxy(x - 180, y + 72, "8");
    outtextxy(x - 195, y - 120, "10");
    outtextxy(x - 120, y - 195, "11");
    settextstyle(1, 0, 3);
    outtextxy(0, ymax - 30, "PRESS ANY KEY FOR STOP");
    outtextxy(x + 150, y + 210, "PUSKAR JASU");
    settextstyle(1, 0, 6);
    outtextxy(0, 0, "CLOCK");
    while (!kbhit())
    {
        setcolor(14);
        if (m == 60)
        {
            if (k <= 90)
            {
                setcolor(14);
                pieslice(x, y, 91 - k, 90 - k, 175);

                delay(10);
                setcolor(0);
                pieslice(x, y, 97 - k, 96 - k, 175);
            }
            if (k > 90)
            {
                setcolor(14);
                pieslice(x, y, 451 - k, 450 - k, 175);

                delay(10);

                setcolor(0);
                pieslice(x, y, 457 - k, 456 - k, 175);
            }
            if (k == 360)
                k = 0;
            k = k + 6;
        }
        else
        {
            if (k <= 90)
            {
                pieslice(x, y, 91 - k, 90 - k, 175);
                setcolor(0);
                pieslice(x, y, 97 - k, 96 - k, 175);
            }
            if (k > 90)
            {
                setcolor(14);
                pieslice(x, y, 451 - k, 450 - k, 175);
                setcolor(0);
                pieslice(x, y, 457 - k, 456 - k, 175);
            }
        }
        setcolor(4);
        if (j == 60 * 5)
        {
            if (l <= 90)
            {
                setcolor(4);
                pieslice(x, y, 91 - l, 90 - l, 175);

                delay(20);

                setcolor(0);
                pieslice(x, y, 93.5 - l, 92.5 - l, 175);
            }
            if (l > 90)
            {
                setcolor(4);
                pieslice(x, y, 451 - l, 450 - l, 175);

                delay(20);

                setcolor(0);
                pieslice(x, y, 453.5 - l, 452.5 - l, 175);
            }
            if (l == 360)
                l = 0;
            l = l + 2.5;
        }
        else
        {
            if (l <= 90)
            {
                setcolor(4);
                pieslice(x, y, 91 - l, 90 - l, 175);
                setcolor(0);
                pieslice(x, y, 93.5 - l, 92.5 - l, 175);
            }
            if (l > 90)
            {
                setcolor(4);
                pieslice(x, y, 451 - l, 450 - l, 175);
                setcolor(0);
                pieslice(x, y, 453.5 - l, 452.5 - l, 175);
            }
        }
        if (i <= 90)
        {
            setcolor(10);
            pieslice(x, y, 91 - i, 90 - i, 175);
            delay(1000);

            delay(5);

            setcolor(0);
            pieslice(x, y, 91 - i, 90 - i, 175);
        }
        if (i > 90)
        {
            setcolor(10);
            pieslice(x, y, 451 - i, 450 - i, 175);
            delay(1000);

            delay(5);

            setcolor(0);
            pieslice(x, y, 451 - i, 450 - i, 175);
        }
        if (i == 360)
            i = 0;
        i = i + 6;
        s = i / 6;
        if (j == 60 * 5)
            j = 0;
        j++;
        if (m == 60)
            m = 0;
        m++;
        if (s == 60)
        {
            m1++;
            s = 0;
        }
        if (h == 24)
            h = 0;
        if (m1 == 60)
        {
            h++;
            m1 = 0;
        }
        //gotoxy(62, 4);
        printf("%02d :", h);
        //gotoxy(68, 4);
        printf("%02d :", m1);
        //gotoxy(74, 4);
        printf("%02d:", s);
        cout << endl;
        s++;
    }
    getch();
    closegraph();
    return 0;
}
