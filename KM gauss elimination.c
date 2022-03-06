#include <stdio.h>
void main()
{
int n,i,j,k;
float A[20][20],X[20],u,s=0.0;
printf("\Enter the order of the Matrix:");
scanf("%d",&n);
printf("\Enter the elements of the augmented matrix:\n");
for(i=1;i<=n;i++)
{
for (j=1;j<=n+1;j++)
{
printf("A[%d][%d]=",i,j);
scanf("%f", &A[i][j]);
}
}
//Forward Elimination//
for(k=1;k<=n-1;k++)
{
for(i=k+1;i<=n;i++)
{
u=A[i][k]/A[k][k];
for(j=k;j<=n+1;j++)
{
A[i][j]=A[i][j]-u*A[k][j];
}
}
}
//Back substitution//
X[n]=A[n][n+1]/A[n][n];
for(i=n-1;i>=1;i--)
{
s=0.0;
for(j=i+1;j<=n;j++)
{
s=s+A[i][j]*X[j];
X[i]=(A[i][n+1]-s)/A[i][i];
}
}
printf("\nThe solution is:\n");
for (i=1;i<=n;i++)
{
printf("\nX[%d]=%7.4f\n",i,X[i]);
}
}
