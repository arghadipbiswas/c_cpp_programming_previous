#include<stdio.h>
int main()
{
	int x,s=0,count=0,avg;
	while(1)
	{
		printf("enter the value of x:");
		scanf("%d",&x);
		if(x<0)
		{
			break;
		}
		s=s+x;
		count++;
	}
	avg=s/count;
	printf("\nresult=%d",s,avg);
	return 0;
}
