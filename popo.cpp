#include<stdio.h>
void main()
{
	int n,i,a[100];
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter nosssss:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
