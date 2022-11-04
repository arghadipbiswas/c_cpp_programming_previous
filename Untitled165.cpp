#include<stdio.h>
void main()
{
	int even_odd(int);
	int n,flag=0;
	printf("\nGoing to check wheather a number is even or odd");
	printf("\nEnter the number");
	scanf("%d ",&n);
	flag=even_odd(n);
	if(flag==0)
	{
		printf("\nThe number is odd");
	}
	else
	{
		printf("\nThe number is even");
	}
}
int even_odd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
