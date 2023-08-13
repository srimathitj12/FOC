#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,r,c;
	printf("enter the number of rows=");
	scanf("%d",&r);
	printf("enter number of columns=");
	scanf("%d",&c);
	printf("enter first matrix elements=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter element a %d%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matix elements=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter  elemnts b %d%d=",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter sum of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			{
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
}



























