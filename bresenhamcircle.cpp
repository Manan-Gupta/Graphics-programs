#include <stdio.h>
#include <dos.h>
#include <graphics.h>

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, 7);
    putpixel(xc-x, yc+y, 7);
    putpixel(xc+x, yc-y, 7);
    putpixel(xc-x, yc-y, 7);
    putpixel(xc+y, yc+x, 7);
    putpixel(xc-y, yc+x, 7);
    putpixel(xc+y, yc-x, 7);
    putpixel(xc-y, yc-x, 7);
}

void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (y >= x)
    {
        drawCircle(xc, yc, x, y);
        x++;
        if(d>0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int xc = 80, yc = 100, r = 70;
    int gd = DETECT, gm;
    char loc[]="C:\\TC\\BGI";
    initgraph(&gd, &gm, loc);
    circleBres(xc, yc, r);
    getch();
    closegraph();
    return 0;
}
