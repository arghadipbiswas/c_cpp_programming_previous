#include<stdio.h>
int main()
{
	int i,n,arr[n];
	int hojobolo(int arr[],int n);
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	hojobolo(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
hojobolo(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			continue;
		}
		else
		for(j=0;j<n;j++)
		{
			arr[j]=arr[i];
		}
	}
	
}
