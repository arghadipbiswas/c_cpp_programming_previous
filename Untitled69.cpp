#include<stdio.h>
int main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	if(num>=0)
	{
	if(num==0)
		printf("zero");
	else
		printf("positive");
	}
	else
	printf("negetive");
	return 0;
}
