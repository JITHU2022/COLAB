#include<stdio.h>
#include<conio.h>
#include<math.h>
#define df(x,y) (x+y)
#define g1(x,y) (1+x+y)
#define g2(x,y) (1+x+y)
#define g3(x,y) (1+x+y)
void main()
{

    float x0,y0,x1,y1,x,n,h,y;
    printf("enter the value of x0 and y0\n");
    scanf("%f%f",&x0,&y0);
    printf("enter the value of x and number of steps\n");
    scanf("%f%f",&x,&n);
    h=(x-x0)/n;
    do
    {
        y1=(y0+h*df(x0,y0)+((h*h)/2)*g1(x0,y0))+((h*h*h)/6)*(g2(x0,y0))+(pow(h,4)/24)*g3(x0,y0);
        x1=x0+h;
        printf("current x1=%f and y1=%f\n",x1,y1);
        y0=y1;x0=x1;
    }
    while(x1<x);
    return 0;
}
