#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define f(x) pow(x,3)-20
#define df(x) 3*x*x
void main()
{
    float x0,x1;
    float f0,df0;
    int n=0;
    printf("enter the value of initial guess\n");
    scanf("%f",&x0);
    do
    {
        f0=f(x0);
        df0=df(x0);
        x1=x0-f0/df0;
        x0=x1;
        n++;
        printf("no of iterations = %d\t",n);
        printf("root of the function = %f\t",x0);
        printf("value of the function = %f\n",f0);
    }
    while(fabs(f0)>e);
}
