#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp (-x*x)
void main()
{
    float a,b,h,k=0,l=0,sum=0,integral,xnew;
    int n,i;
    printf("Enter the lower and upper limits of the integration   ");
    scanf("%f%f",&a,&b);
    printf("Enter the number of intervals = ");
    scanf("%d",&n);
    h=b-a/n;
    printf("h = %f",h);
    sum=f(a)+f(b);
    for (i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            xnew=a+i*h;
            k=k+f(xnew);
        }
        else
        {
            xnew=a+i*h;
            l=l+f(xnew);
        }
    }
    integral=(h/3)*(sum+3*i+2*k);
    printf("\n Value of the integral= %f",integral);
    return 0;
}
