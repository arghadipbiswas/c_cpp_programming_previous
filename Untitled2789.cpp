#include<stdio.h>
int mian()
{
	int x[10][10],y[10][10],r,c,i,j,max,min;
	printf("enter the row   and   col::");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the nos:");
			scanf("%d",&x[i][j]);
			printf("%d",x[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",x[i][j]);
		}
	}
	return 0;
}
