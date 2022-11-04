#include<stdio.h>
int main()
{
	int n,fact,i,j;
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		j=i;fact=1;
		while(j>0)
		{
			fact=(fact*j)-1;
			
			j=j-1;
		}
	}
	return 0;
}
