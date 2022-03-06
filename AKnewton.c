#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.001
#define f(x) pow (x, 3) -4*x+1
#define df(x) 3*x*x-4
int main()
{
    int n=0;
    float x0,x1;
    float f0,df0;
    printf ("Enter the initial guess x0 \n");
    scanf ("%f",&x0);
    do
    {
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        x0=x1;
        f0=f(x0);
        n++;
        printf ("\n No. of iterations = %d\t",n);
        printf ("Roots of the function = %f\t",x0);
        printf ("Value of the function = %f\t",f0);
    } while (fabs (f0)>e);
    getch();
}