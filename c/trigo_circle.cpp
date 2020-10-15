#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void trig_circle(int xc, int yc, int r)
{
    int xlast, ylast, i, xnext, ynext;
    float radian;
    for(i=0; i<=360; i++)
    {
        radian = i * 0.01745;
        xnext = xc + r * cos(radian);
        ynext = yc + r * sin(radian);
        putpixel(xnext,ynext,WHITE);
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
    trig_circle(xc,yc,r);
    getch();
}
