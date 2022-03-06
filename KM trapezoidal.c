#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+(x*x))

void main()
{
    float a,b,h,s=0,newx,integral;
    int n,i;
    printf("enter upper and lower limit\n");
    scanf("%f%f",&a,&b);
    printf("number of intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    i=n-1;
    while(i!=0)
    {
        newx=a+(i*h);
        s=s+f(newx);
        i--;
    }
    integral=(h/2)*(f(a)+f(b)+(2*s));
    printf("integral = %f",integral);
    return 0;
}
