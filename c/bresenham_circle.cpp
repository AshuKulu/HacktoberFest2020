#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void bresenham_circle(int xc, int yc, int r)
{
    int xnext,ynext,xlast,ylast,d;
    xlast = 0;
    ylast = r;
    d = 3 - 2 * r;
    while(xlast < ylast)
    {
        xnext = xlast + 1;
        if (d < 0)
        {
            ynext = ylast;
            d = d + 4 * xnext + 6;
        }
        else
        {
            ynext = ylast - 1;
            d = d + 4 * (xnext - ynext) + 10;
        }
        putpixel(xc+xnext,yc+ynext,WHITE);
        putpixel(xc+ynext,yc+xnext,WHITE);
        putpixel(xc-xnext,yc+ynext,WHITE);
        putpixel(xc-ynext,yc+xnext,WHITE);
        putpixel(xc-xnext,yc-ynext,WHITE);
        putpixel(xc-ynext,yc-xnext,WHITE);
        putpixel(xc+xnext,yc-ynext,WHITE);
        putpixel(xc+ynext,yc-xnext,WHITE);
        xlast=xnext;
        ylast=ynext;
    }
}

int main()
{
    int gd = DETECT, gm,xc,yc,r;
    initgraph(&gd,&gm,"");
    printf("Enter Center Coordinates of Circle:- ");
    scanf("%d %d",&xc,&yc);
    printf("Enter the Radius:- ");
    scanf("%d",&r);
    bresenham_circle(xc,yc,r);
    getch();
    getch();
}
