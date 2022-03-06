#include<stdio.h>
#include<conio.h>
#include<math.h>
#define df(x,y) (x+y)
main()
{
    float x0,y0,h,xn,y1,x1,k1,k2,k3,k4,k;
    printf("enter the values of x0 and y0:");
    scanf("%f",&x0);
    scanf("%f",&y0);
    printf("enter the value of h:");
    scanf("%f",&h);
    printf("enter the value where solution is to be found:");
    scanf("%f",&xn);
    do{
        k1=h*df(x0,y0);
        k2=h*df(x0+0.5*h,y0+0.5*k1);
        k3=h*df(x0+0.5*h,y0+0.5*k2);
        k4=h*df(x0+h,y0+k3);
        k=(k1+k2+k3+k4)/6;
        y1=y0+k;
        x1=x0+h;
        y0=y1;
        x0=x1;
        printf("\n value:%f at x=%f",y1,x1);
    }while(x1<=xn);
}
