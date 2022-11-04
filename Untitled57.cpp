#include<stdio.h>
int main()
{
	int s=0,n,avg;
	printf("enter the nos:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s+i;
		printf("\nsum=%d",s);
    }
	avg=s/n;
	printf("\navg=%d",avg);
	return 0; 
}
