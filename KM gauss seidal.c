#include<stdio.h>
#include<conio.h>
#include<math.h>
#define aerr 0.0001
void main()
{
    int i,j,k,itr,maxitr,n;
    float a[10][11],x[10];
    float temp,sum,err,maxerr;
    printf("\ngive the number of equations=");
    scanf("%d",&n);
    printf("\n give the maximum no of iterations=");
    scanf("%d",&maxitr);
    printf("enter the elements of the augmented matrix row wise \n");

    for(i=0;i<n;i++)x[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("iteration x[1] x[2] x[3] \n");
    for(itr=1;itr<=maxitr;itr++)
    {
        maxerr=0.0;
        for(i=0;i<n;i++)
        {
            sum=0.0;
            for(j=0;j<n;j++)
                if(j!=i)sum=sum+a[i][j]*x[j];
            temp=(a[i][n]-sum)/a[i][i];
            err=fabs(x[i]-temp);
            if(err>maxerr)maxerr=err;
            x[i]=temp;
        }
        printf("\n%5d",itr);
        for(i=0;i<n;i++)
        printf("%9.4f",x[i]);
        if(maxerr<=aerr)
        {
        printf("\n convergence in %3d iterations\n",itr);
        for(i=0;i<n;i++)
            printf("\tx[%2d]=%7.4f\n",i+1,x[i]);
        return 0;

    }
}
printf("solution does not converge iterations not sufficient\n");
return 1;
}
