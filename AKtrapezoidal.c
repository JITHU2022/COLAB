#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+pow(x,2))
int main()
{
 float a, b, h, s=0, newx, interval;
 int n, i;
 printf("Enter lower limit of integration: ");
 scanf("%f", &a);
 printf("Enter upper limit of integration: ");
 scanf("%f", &b);
 printf("Enter number of sub intervals: ");
 scanf("%d", &n);
 h = (b - a)/n;
 i=n-1;
 while (i!=0)
 {
     newx=a+(i*h);
     s=s+f(newx);
     i--;
 }
 interval = (h/2)*(f(a)+(2*s)+f(b));
 printf("\nRequired value of integration is: %f", interval);
 getch();
 return 0;
}
