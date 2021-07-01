// area of a circle, a rectangle and a triangle, using concept of function overloading.
#include<iostream>
#include<math.h>
using namespace std;
//Area of circle
float area(float r)
{
    float ret=3.14*pow(r,2);
    return ret;
}
//Area of the rectangle
float area(float l,float b)
{
    float ret=l*b;
    return ret;
}
//Area of the triangle
float area(float s1,float s2,float s3)
{
    float t=(s1+s2+s3)/2;
    float ret=sqrt(t*(t-s1)*(t-s2)*(t-s3));
    return ret;
}
int main()
{
    int ch;
    while(1){
    cout<<"\n 1. Area of circle \n"<<"2. Area of reactangle\n"<<"3. Area of triangle\n"<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            float n;
            cout<<"\nEnter radius: ";
            cin>>n;
            cout<<"\nArea of sphere: "<<area(n);
            break;
        }
        case 2:
        {
            float l,b ;
            cout<<"\nEnter length and bredth of the rectangle: ";
            cin>>l>>b;
            cout<<"Area of Rectangle: "<<area(l,b);
            break;
        }
        case 3:
        {
            float s1,s2,s3;
            cout<<"Enter sides of triangle:";
            cin>>s1>>s2>>s3;
            cout<<area(s1,s2,s3);
            break;
        }
        default:
        cout<<"Invalid Input";
        
    }
    }
return 0;
}
