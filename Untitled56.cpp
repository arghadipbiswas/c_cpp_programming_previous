#include<stdio.h>
int main()
{
	int x[100],s=0,avg;
	int i,n;
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the nos:");
		scanf("%d",&x[i]);
	s=s+x[i];
	}

	avg=s/n;
	printf("\n%d \n%d",s,avg);
	return 0;
}
