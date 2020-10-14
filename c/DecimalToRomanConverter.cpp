//
//
//To convert entered decimal number into roman numeral...
//
//
#include <stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    
    while(x)
    {
        if(x>=900)
        {
            if(x<1000){printf("CM");x-=900;}
            else if(x>=1000){printf("M");x-=1000;}
        }
        else if(x>=400)
        {
            if(x<500){printf("CD");x-=400;}
            else if(x>=500){printf("D");x-=500;}
        }
        else if(x>=90)
        {
            if(x<100){printf("XC");x-=90;}
            else if(x>=100){printf("C");x-=100;}
        }
        else if(x>=40)
        {
            if(x<50){printf("XL");x-=40;}
            else if(x>=50){printf("L");x-=50;}
        }
        else if(x>=9)
        {
            if(x<10){printf("IX");x-=9;}
            else if(x>=10){printf("X");x-=10;}
        }
        else if(x>=4)
        {
            if(x<5){printf("IV");x-=4;}
            else if(x>=5){printf("V");x-=5;}
        }
        else
        {
            printf("I");
            x--;
        }
    }
}
