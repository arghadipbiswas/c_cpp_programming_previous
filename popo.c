#include<stdio.h>
int main()
{
	char s;
	printf("enter the nos:");
	scanf("%c",&s);
	if(s=='a')
	{
		printf("Atheletics");
	}
	else if(s=='b')
	{
		printf("Basketball");
	}
	else if(s=='c')
	{
		printf("Cricket");
	}
	else if(s=='d')
	{
		printf("Discus Throw");
	}
		else if(s=='g')
	{
		printf("Golf");
	}
		else if(s=='h')
	{
		printf("Hockey");
	}
		else if(s=='t')
	{
		printf("Tennis");
	}
	else
	printf("invalid");
	return 0;
}
