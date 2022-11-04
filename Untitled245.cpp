#include<stdio.h>
int main()
{
	int i=1,x,fact=1;
	printf("enter the nos:");
	scanf("%d",&x);
	for(;i<=x;)
	{
		fact*=i;
		i++;
	}
	printf("\nThe fact is = %d ",fact);
	return 0;
}
