#include<stdio.h>
int main()
{
	int r,col,i,j,k;
	printf("enter nos:");
	scanf("%d",&r);
	for(i=1,k=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
		
	}

	return 0;
}
