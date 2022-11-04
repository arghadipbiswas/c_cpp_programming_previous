// 4,6,8,11,15,10,20,20,70,52,65,0,1,10,100,35,75
#include<stdio.h>
void main(void)  
{
	int a[100],i,j,n,swap;
	printf("enter the nos:"); 
	scanf("%d",&n);  
	for(i=0;i<n;i++)
	{
		printf("enter the nosssssss: ");
		scanf("%d",&a[i]);
	}         
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)  
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("  %d   ",a[i]);
	}
}
