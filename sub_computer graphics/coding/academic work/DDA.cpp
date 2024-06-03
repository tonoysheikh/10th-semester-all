#include <bits/stdc++.h>
#include<graphics.h>
#include<stdio.h>

using namespace std;

int main()
{
    int gd = DETECT , gm;
    initgraph(&gd,&gm,"");

    int x1 , y1,x2,y2;
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

    closegraph();
    return 0;
}

