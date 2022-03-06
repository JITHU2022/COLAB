#include<stdio.h>
#include<conio.h>
#define f(x) 1/(1+(x*x))
void main()
{
float a,b,h,sum=0,k=0,l=0,xnew,integral;
int n,i;
printf("Enter lower and upper limits\n");
scanf("%f%f",&a,&b);
printf("enter number of intervals\n");
scanf("%d",&n);
h=(b-a)/n;
printf("h=%f\n",h);
for(i=1;i<=n-1;i++)
{
if(i%2==0)
{
xnew=a+i*h;
k=k+f(xnew);
}
else{
xnew=a+i*h;
l=l+f(xnew);
}
}
integral=(h/3)*(f(a)+f(b)+4*l+2*k);
printf("value of the integral=%f",integral);
return 0;

}
