#include<stdio.h>
int mian()
{
	int m,n,i,loc,arr[50];
	printf("enter the size:");
	scanf("%d",&m);
	printf("enter %d elements:",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d",arr[i]);
	}
	//printf("enter the elements to insert:");
	scanf("%d",&n);
	printf("enter the loc to insert:");
	scanf("%d",&loc);
	return 0;
}
