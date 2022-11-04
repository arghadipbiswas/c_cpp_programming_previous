#include<stdio.h>
int main()
{
	int a[100],i,max,max1,max2,max3,max4,max5,t,n;
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a[i]);
	}
	max=max1=max2=max3=max4=max5=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max1=max;
			max=a[i];
		}
		else if(a[i]<max)
		{
			max1=a[i];
			max=a[0];
		}
		else if(a[i]>max1 && a[i]<max)
		{
			max2=max1;
			max1=t=a[i];
		}
		
		else if(a[i]<max1 && a[i]<max)
		{
			max2=a[i];
			max1=t=max1;
			
		}
		else if(a[i]>max2 && a[i]<max1 && a[i]<max)
		{
			max3=max2;
			max2=a[i];
		}
		else if(a[i]<max2 && a[i]<max1 && a[i]<max)
		{
			max3=a[i];
			max2=max2;
		}
		else if(a[i]>max3 && a[i]<max2 && a[i]<max1)
		{
			max4=max3;
			max3=a[i];
		}
		else if(a[i]<max3 && a[i]<max2 && a[i]<max1)
		{
			max4=a[i];
			max3=max3;
		}
		else if(a[i]>max4 && a[i]<max3 && a[i]<max2 && a[i]<max1  && a[i]<max)
		{
			max5=max4;
			max4=a[i];
		}
		else if(a[i]<max4 && a[i]<max3 && a[i]<max2 && a[i]<max1  && a[i]<max)
		{
			max5=a[i];
			max4=max;
		}
	
		
	}
	
		
		
		
	printf("\nmax=%d ",max);
		printf("\nmax1=%d ",max1);
		printf("\nmax2=%d ",max2);
	printf("\nmax3=%d ",max3);
	
				
		

}
