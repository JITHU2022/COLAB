#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-20
#define e 0.0001
void main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int n=0;
    printf("enter the two approx of the root\n");
    scanf("%f%f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=(x0*f1-x1*f0)/(f1-f0);
        f2=f(x2);
        x0=x1;
        x1=x2;
        n++;
        printf("no of iteration = %d\t",n);
        printf("root of the eqn = %f\t",x2);
        printf("value of the function = %f\n",f2);
    }
    while(fabs(f2)>e);
}
