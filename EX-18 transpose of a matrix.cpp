#include<stdio.h>7
int main()
{
	int a[10][10],b[10][10],i,j,r,c;
	printf("enter r and c=");
	scanf("%d%d",&r,&c);
	printf("enter the matrix=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("the transpose=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}