#include<stdio.h>
#define df(x,y) (x+y)
void main()
{
    float x0,y0,h,x1,x,y1;
    printf("enter the value of x0,y0,h,x\n");
    scanf("%f%f%f%f",&x0,&y0,&h,&x);
    x1=x0;y1=y0;
    do
    {
        y1=y1+h*df(x1,y1);
        x1=(x1+h);
        printf("when x = %f y = %f\n",x1,y1);
    }while(x1<x);
    return 0;
}
