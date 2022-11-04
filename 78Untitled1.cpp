#include<stdio.h>
int main()
{
	int num;
	printf("no:");
	scanf("%d",&num);
	if(num>=90&&num<=100)
	{
		printf("o");
	}
	else if(num>=80&&num<=89)
	{
		printf("e");
	}
	else
	printf("t");
	return 0;
}
