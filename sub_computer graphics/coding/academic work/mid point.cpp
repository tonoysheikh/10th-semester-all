#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>

using namespace std;

void plotPoints(int a, int b, int x, int y) {
    putpixel(a + x, b + y, YELLOW);
    putpixel(a - x, b + y, YELLOW);
    putpixel(a + x, b - y, YELLOW);
    putpixel(a - x, b - y, YELLOW);
    putpixel(a + y, b + x, YELLOW);
    putpixel(a - y, b + x, YELLOW);
    putpixel(a + y, b - x, YELLOW);
    putpixel(a - y, b - x, YELLOW);

    delay(100);
}

void drawCircle(int a, int b, int r) {
    int x = 0, y = r;
    int d = 1 - r;

    plotPoints(a, b, x, y);

    while (x < y) {
        x++;
        if (d < 0) {
            d += 2 * x + 1;
        } else {
            y--;
            d += 2 * (x - y) + 1;
        }
        plotPoints(a, b, x, y);
    }
}

int main() {
    int gd = DETECT, gm;
    int a, b, r;

    initgraph(&gd, &gm, " ");

    cout << "Enter the center of the circle (a, b): ";
    cin >> a >> b;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    setcolor(WHITE);
    outtextxy(100, 50, "Abdullah Al Zobayer 3035");

    drawCircle(a, b, r);

    getch();
    closegraph();

    return 0;
}
