#include<stdio.h>
#include<graphics.h>

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int p = 0;

    while (x >= y)
    {
    putpixel(x0 + x, y0 + y, 7);
    putpixel(x0 + y, y0 + x, 7);
    putpixel(x0 - y, y0 + x, 7);
    putpixel(x0 - x, y0 + y, 7);
    putpixel(x0 - x, y0 - y, 7);
    putpixel(x0 - y, y0 - x, 7);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 7);

    if (p <= 0)
    {
        y ++;
        p = p + 2*y + 1;
    }

    if (p > 0)
    {
        x--;
        p = p-2*x + 1;
    }
    delay(50);
    }
}
int main()
{
    int gdriver=DETECT, gmode, error, x, y, r;
    char loc[]="c:\\tc\\bgi";
    initgraph(&gdriver, &gmode,loc);

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    printf("Enter co-ordinates of center(x and y): ");
    scanf("%d%d", &x, &y);
    drawcircle(x, y, r);
    getch();
    closegraph();
    return 0;
}
