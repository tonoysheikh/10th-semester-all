#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

const int THICKNESS = 3;
const int DELAY_DURATION = 500;

void drawThickLine(int x1, int y1, int x2, int y2, int thickness) {
    for (int i = 0; i < thickness; i++) {
        line(x1 + i, y1, x2 + i, y2);
    }
}

void drawThickCircle(int x, int y, int radius, int thickness) {
    for (int i = 0; i < thickness; i++) {
        circle(x, y, radius + i);
    }
}

void Menu() {
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    outtextxy(250,10,"MY MENU");
    outtextxy(100, 50, "1. See my name.");
    outtextxy(100, 100, "2. Moving car.");
    outtextxy(100, 150, "3. Draw a line.");
    outtextxy(100, 200, "4. Draw a circle.");
    outtextxy(100, 250, "5. Happy face.");
    outtextxy(100, 300, "6. Solar System.");
    outtextxy(100, 350, "7. Exit.");

    rectangle(50, 40, 600, 400);
}

void myname()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);
    outtextxy(100, 200, "My nickname draw");

    setlinestyle(SOLID_LINE, 0, THICKNESS);
    setcolor(YELLOW);

    drawThickLine(75, 30, 75, 100, THICKNESS);
    drawThickLine(50, 30, 100, 30, THICKNESS);

    drawThickCircle(120, 70, 25, THICKNESS);

    drawThickLine(160, 30, 160, 100, THICKNESS);
    drawThickLine(160, 30, 190, 100, THICKNESS);
    drawThickLine(190, 100, 190, 30, THICKNESS);


    drawThickCircle(230, 70, 25, THICKNESS);

    drawThickLine(270, 30, 290, 60, THICKNESS);
    drawThickLine(290, 60, 310, 30, THICKNESS);
    drawThickLine(290, 60, 290, 100, THICKNESS);

    getch();
}
void emoji()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);

    setcolor(YELLOW);

    outtext("Hi, I am happy face.");

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

    delay(1000);

    getch();
}
void DDA_algorithm()
{

cleardevice();

    int x1, y1,x2,y2;
    cin >> x1 >> y1>>x2>>y2;

    int delx = abs(x2-x1);
    int dely = abs(y2-y1);

    int x = x1;
    int y = y1;
    int step;

    if(delx > dely)
    {
        step = delx;
    }
    else
    {
        step = dely;
    }

    x = round(((double)delx/(double)step));
    y = round(((double)dely/(double)step));


    while(x1 <= x2 or y1 <= y2)
    {
        putpixel(x1,y1,GREEN);

        x1+= x;
        y1 += y;
        delay(100);

    }

    getch();
}

void mid_point_algorithm()
{
    cleardevice();
    setbkcolor(BLACK);
    setcolor(WHITE);
    int x, y, x1, y1, r;
    cin >> x1 >> y1 >> r;

    x = 0;
    y = r;

    int p = 1 - r;

    while(x < y)
    {
        if(p >= 0)
        {
            x++;
            y--;
            p = p + 2 * x + 1 - 2 * y;
        }
        else
        {
            x++;
            p = p + 2 * x + 1;
        }
        putpixel(x+x1,y+y1,WHITE);
        cout << x << " \t" << y << endl;
        putpixel(y+y1,x+x1,WHITE);
        cout << x << " \t" << y << endl;

        putpixel(x1-x,y1-y,WHITE);
        cout << x << " \t" << y << endl;
        putpixel(y1-y,x1-x,WHITE);
        cout << x << " \t" << y << endl;

        putpixel(x1+x,y1-y,WHITE);
        cout << x << " \t" << y << endl;
        putpixel(y1+y,x1-x,WHITE);
        cout << x << " \t" << y << endl;

        putpixel(x1-x,y1+y,WHITE);
        cout << x << " \t" << y << endl;
        putpixel(y1-y,x1+x,WHITE);
        cout << x << " \t" << y << endl;

    }
    getch();

}

void moving_car()
{
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);
    setbkcolor(4);

    int i = 0;

    do
    {

        ellipse(200,30,60,240,10,15);

        ellipse(225,20,345,165,20,15);

        ellipse(262,27,340,160,20,15);

        ellipse(268,42,230,50,20,10);

        ellipse(226,46,163,340,31,15);

        ellipse(300,21,20,182,21,19);

        ellipse(325,31,290,100,21,15);

        ellipse(299,45,228,20,33,11);


        ellipse(40,30,60,240,10,15);

        ellipse(65,20,345,165,20,15);

        ellipse(105,27,340,160,20,15);

        ellipse(109,42,230,50,20,10);

        ellipse(66,46,163,340,31,17);



        ellipse(450,30,60,240,10,15);

        ellipse(475,20,345,165,20,15);

        ellipse(512,27,340,160,20,15);

        ellipse(518,42,230,50,20,10);

        ellipse(476,46,163,340,31,15);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(0,150,100,75);

        line(100,75,200,150);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(175,131,275,75);

        line(275,75,375,150);


        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(350,131,450,75);

        line(450,75,550,150);

        setcolor(WHITE);

        setfillstyle(SOLID_FILL,GREEN);

        line(525,131,600,75);

        line(600,75,750,180);



        line(0,150,750,150);

        floodfill(100,136,WHITE);

        floodfill(275,136,WHITE);

        floodfill(450,136,WHITE);

        floodfill(600,136,WHITE);


        setcolor(WHITE);
        setfillstyle(SOLID_FILL, 14);
        arc(178, 112, 0, 180, 30);
        floodfill(171, 109, WHITE);

        setfillstyle(SOLID_FILL,BLUE);

        floodfill(50,50,WHITE);


        setbkcolor(4);
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

        if(i > 500)
        {
            getch();
        }
        i++;


    }while(!kbhit());

    setfillstyle(SOLID_FILL,15);
    rectangle(550,335,580,340);
    floodfill(560,337,15);

    getch();
}

void solor()
{
    cleardevice();

    setbkcolor(BLACK);
    setcolor(WHITE);
    int x, y, i, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j, m = 0;
    x = getmaxx() / 2;
    y = getmaxy() / 2;

    while (!kbhit())
    {
        setbkcolor(0);

        setcolor(14);
        circle(x, y, 30);
        setfillstyle(1, 4);
        floodfill(x, y, 14);

        i = 60 * cos((0 + a) * 3.14159 / 180);
        j = 50 * sin((0 + a) * 3.14159 / 180);
        a += 30;
        if (a > 360)
            a = 0;
        setcolor(8);
        setfillstyle(1, 8);
        fillellipse(x + i, y - j, 10, 10);
        settextstyle(2, 0, 6);
        outtextxy(x + i, y - j, "mercury");

        ellipse(x, y, 0, 360, 60, 50);
        i = 90 * cos((90 + b) * 3.14159 / 180);
        j = 70 * sin((90 + b) * 3.14159 / 180);
        b += 25;
        if (b > 360)
            b = 0;
        setcolor(14);
        setfillstyle(1, 14);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "venus");
        ellipse(x, y, 0, 360, 90, 70);

        i = 120 * cos((180 + c) * 3.14159 / 180);
        j = 100 * sin((180 + c) * 3.14159 / 180);
        c += 20;
        if (c > 360)
            c = 0;
        setcolor(1);
        setfillstyle(1, 1);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "earth");
        ellipse(x, y, 0, 360, 120, 100);

        i = 150 * cos((60 + d) * 3.14159 / 180);
        j = 120 * sin((60 + d) * 3.14159 / 180);
        d += 15;
        if (d > 360)
            d = 0;
        setcolor(4);
        setfillstyle(1, 4);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "mars");
        ellipse(x, y, 0, 360, 150, 120);

        i = 180 * cos((0 + e) * 3.14159 / 180);
        j = 150 * sin((0 + e) * 3.14159 / 180);
        e += 10;
        if (e > 360)
            e = 0;
        setcolor(12);
        setfillstyle(1, 12);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "jupiter");
        ellipse(x, y, 0, 360, 180, 150);

        i = 210 * cos((240 + f) * 3.14159 / 180);
        j = 170 * sin((240 + f) * 3.14159 / 180);
        f += 5;
        if (f > 360)
            f = 0;
        setcolor(7);
        setfillstyle(1, 7);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "saturn");
        ellipse(x, y, 0, 360, 210, 170);

        i = 240 * cos((90 + g) * 3.14159 / 180);
        j = 190 * sin((90 + g) * 3.14159 / 180);
        g += 3;
        if (g > 360)
            g = 0;
        setcolor(9);
        setfillstyle(1, 9);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "uranus");
        ellipse(x, y, 0, 360, 240, 190);

        i = 270 * cos((270 + h) * 3.14159 / 180);
        j = 210 * sin((270 + h) * 3.14159 / 180);
        h += 2;
        if (h > 360)
            h = 0;
        setcolor(9);
        setfillstyle(1, 9);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "neptune");
        ellipse(x, y, 0, 360, 270, 210);

        i = 300 * cos((330 + g) * 3.14159 / 180);
        j = 230 * sin((330 + g) * 3.14159 / 180);
        m++;
        if (m > 360)
            m = 0;
        setcolor(6);
        setfillstyle(1, 6);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "pluto");
        ellipse(x, y, 0, 360, 300, 230);

        delay(100);
        cleardevice();
    }
}



int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch (choice)
        {
        case '1':
            outtextxy(200, 400, "You chose option 1!");
            myname();
            cleardevice();
            //drawMenu();
            break;
        case '2':
            outtextxy(200, 400, "You chose option 2!");
            delay(1000);
            cleardevice();
            //rectangle();
            moving_car();
            delay(1000);
            cleardevice();
            //drawMenu();
            break;
        case '3':
            outtextxy(200, 400, "You chose option 3!");
            delay(1000);
            cleardevice();
            DDA_algorithm();
            delay(1000);
            cleardevice();
            //drawMenu();
            break;
        case '4':
            outtextxy(200, 400, "You chose option 4!");
            delay(1000);
            cleardevice();
            mid_point_algorithm();
            delay(1000);
            cleardevice();
            break;
        case '5':
            outtextxy(200, 400, "You chose option 5!");
            delay(1000);
            cleardevice();
            emoji();
            delay(1000);
            cleardevice();
            break;
        case '6':
            outtextxy(200, 400, "You chose option 6!");
            delay(1000);
            cleardevice();
            solor();
            delay(1000);
            cleardevice();
            break;
        case '7':
            closegraph();
            exit(0);
            break;
        default:
            outtextxy(200, 400, "Invalid choice!");
            break;
        }

        delay(1000);
        Menu();
    }

    getch();
    closegraph();

    return 0;
}

