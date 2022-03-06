#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.001
#define f(x) x*x*x -4*x +1
void main()
{

    float x0,x1,x2;
    float f0,f1,f2;
    int n=0;
    printf ("Enter the lower and upper limits x0 and x1\n");
    scanf ("%f %f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        if (f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        n++;
        printf( "No of iteration= %d\t", n);
        printf("Root= %f\t",x2);
        printf("Value of function= %f\n",f2);
    }
    while (fabs(f2)>e);
    getch();
}
