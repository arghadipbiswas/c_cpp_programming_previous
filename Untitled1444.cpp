#include <stdio.h>
int check_even_odd(int);
int check_even_odd(int i)
{
	if(i%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i,n;
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(check_even_odd(i))
		{
			printf("%4d  [even]\t",i);
		}
		else
		{
			printf("%4d  [odd]\t",i);
		}
	}
}

