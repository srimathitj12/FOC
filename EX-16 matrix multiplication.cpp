#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	printf("enter number of row");
	scanf("%d",&r);
    printf("enter number column");
    scanf("%d",&c);
    printf("enter first matrix element:\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;i<c;j++)
    	{
    		printf("the elements of a %d%d",i+1,j+1);
    		scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("enter second elements b %d%d",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiply of the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
} 