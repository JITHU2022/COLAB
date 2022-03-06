#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) pow(x,4)-x-10
#define g(x) pow((x+10),0.25)
void main()
{
    float x0,x1,g0,err;
    printf("enter the initial guess\n");
    scanf("%f",&x0);
    do
    {
        g0=g(x0);
        x1=g0;
        err=(x1-x0)/x1;
        printf("x0 = %f,x1= %f,g0 = %f,err = %f\n",x0,x1,g0,err);
        x0=x1;
    }
    while(fabs(err)>e);
    return 0;
}
