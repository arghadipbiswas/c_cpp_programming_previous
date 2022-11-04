#include<stdio.h>
void main()
{
	int n;
	long int fact(int);
	printf("enter the nos:");
	scanf("%d",&n);
	printf("%ld",fact(n));
}
long int fact(int n)
{
	if(n<1)
	return 1;
	else
	return (n*fact(n-1));
}
