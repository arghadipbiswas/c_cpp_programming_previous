#include<stdio.h>
int main()
{
	int i,n,x=0,y=1;
	int z=x+y;
	printf("enter the nos:");
	scanf("%d",&n);
	printf("The fact is = %d  %d ",x,y);
	for(i=1;i<=n;i++)
	{
		printf("%d ",z);	
		x=z;
		y=x;
		z=x+y;			
	}
	return 0;
}
