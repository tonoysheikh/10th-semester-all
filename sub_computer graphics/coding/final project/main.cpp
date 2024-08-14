#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

void Menu() {
    cleardevice();

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(100, 100, 600, 400);

    outtextxy(150, 100, "1. See my name.");
    outtextxy(150, 150, "2. MOving car.");
    outtextxy(150, 200, "3. Draw a line.");
    outtextxy(150, 250, "4. Draw a circle.");
    outtextxy(150, 300, "5. Exit");

    rectangle(100, 100, 600, 400);
}

void myname()
{
    cleardevice();
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
}
void emoji()
{
    cleardevice();
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

    //int i = 1;
    while(x1 <= x2 or y1 <= y2)
    {
        putpixel(x1,y1,GREEN);

        x1+= x;
        y1 += y;
        //i++;
        delay(100);

    }

    getch();
}

void mid_point_algorithm()
{
    cleardevice();
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
        //x++;
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
    setbkcolor(4);

    for (int i = 0; i < 500; i++)
    {
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


    }
    setfillstyle(SOLID_FILL,15);
    rectangle(550,335,580,340);
    floodfill(560,337,15);

    getch();
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
            delay(1000);
            cleardevice();
            myname();
            delay(1000);
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

