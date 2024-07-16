#include <bits/stdc++.h>
#include<graphics.h>

using namespace std;


int main()
{

    int gd = DETECT , gm;
    initgraph(&gd,&gm,"");

    int x , y , x1 , y1 , r;
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

    closegraph();


    return 0;
}
