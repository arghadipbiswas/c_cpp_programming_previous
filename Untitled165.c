#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no:");
	scanf("%d",&n);
	printf("%8c",' ');
	for(i=2;i<=n;i++)
	{
		printf("%8d",i);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%8d",i);
		for(j=2;j<=n;j++)
	{
		printf("%8d",i*j);
	}
	printf("\n");
 }
	
return 0;
}
