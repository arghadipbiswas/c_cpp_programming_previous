#include<stdio.h>
int main()
{
	float n,i,s;
	printf("enter the nos:");
	scanf("%f",&n);
	for(i=1,s=0;i<=n;i++)
	{
		s=s+(1/i);
	}
	printf("%.2f",s);
	return 0;
}
