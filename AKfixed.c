#include <stdio.h>
#include <conio.h>
#include <math.h>
#define e 0.001
#define f(x) pow (x,4) -x -10
#define g(x) ((x+10),0.25)
void main ()
{
int n=0;
float x0, g0, x1, err;
printf ("Enter the initial guess x0 = ");
scanf ("%f",&x0);
do
{
    g0=g(x0);
    x1=g0;
    err=(x1-x0)/x1;
    printf ("\n x0=%f,x1=%f,err=%f\t",x0,x1,err);
    x0=x1;
}
while (fabs(err)>e);
}
