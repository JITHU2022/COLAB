#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.001
#define f(x) x*x*x -4*x +1
int main()
{
    int n=0;
    float x0,x1,x2;
    float f0,f1,f2;
    printf ("Enter the two approximate of the root \n");
    scanf ("%f%f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f2=f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        n++;
        printf("\n No. of iteration = %d\t",n);
        printf("root of the function = %f\t",x2);
        printf("Value of the function = %f\t",f2);
    } while (fabs(f2)>e);
    return 0;
}
