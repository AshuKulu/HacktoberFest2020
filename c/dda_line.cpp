#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void dda_line()
{
    int dy,dx,x1,y1,x2,y2,temp,i;
    float m,xlast,ylast,xnext,ynext,z;
    printf("Enter x1 Point: ");
    scanf("%d",&x1);
    printf("Enter y1 Point: ");
    scanf("%d",&y1);
    printf("Enter x2 Point: ");
    scanf("%d",&x2);
    printf("Enter y2 Point: ");
    scanf("%d",&y2);

    if(x1>x2)
    {
        temp = x1;
        x1 = x2;
        x2 = temp;
        temp = y1;
        y2 = y1;
        y2 = temp;
    }
    xlast=x1;
    ylast=y1;
    putpixel(x1,y1,WHITE);
    putpixel(x2,y2,WHITE);

    dy = y2 - y1;   //Step 1
    dx = x2 - x1;

    m = (dy*1.0)/dx;  //Step 2

    z = 1/m;  //step 3
    if (z < 0)
    z = z * -1;
    if(abs(m) > 1)
    {
        if(dy > 0)		//Case 1
        {
            for(i=1; i<=abs(dy); i++)
            {
                ynext = ylast + 1;
                xnext = xlast + z;
                putpixel(xnext,ynext,WHITE);
                xlast = xnext;
                ylast = ynext;
            }
        }
        else		//Case 2
        {
            for(i=1;i<=abs(dy);i++)
            {
                ynext = ylast - 1;
                xnext = xlast + z;
                putpixel(xnext,ynext,WHITE);
                xlast = xnext;
                ylast = ynext;
            }
        }
    }
    else
    {
        if(dy > 0)		//Case 3
        {
            for(i=1; i<=abs(dx); i++)
            {
                ynext = ylast + abs(m);
                xnext = xlast + 1;
                putpixel(xnext,ynext,WHITE);
                xlast = xnext;
                ylast = ynext;
            }
        }
        else			//Case 4
        {
            for(i=1; i<=abs(dx); i++)
            {
                ynext = ylast - abs(m);
                xnext = xlast + 1;
                putpixel(xnext,ynext,WHITE);
                xlast = xnext;
                ylast = ynext;
            }
        }
    }
    getch();
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    dda_line();
    getch();
}
