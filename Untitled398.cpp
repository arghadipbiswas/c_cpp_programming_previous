#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three nos:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (c+a)>b)
	{
		printf("The triangle is valid");
	}
	else
	printf("The triangle is not valid");
	return 0;
}
