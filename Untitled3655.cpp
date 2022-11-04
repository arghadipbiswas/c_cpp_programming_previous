#include<stdio.h>
int main()
{
	int n,s=0,x;
	printf("enter nos:");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;
		s=s*10+x;
		printf("\n%d\n",s);
	}
	while(s>0)
	{
		x=s%10;
		switch(x)
		{
			case 0:
				printf("zero");
				break;
				case 1:
				printf("one");
				break;
				case 2:
				printf("two");
				break;
				case 3:
				printf("three");
				break;
				case 4:
				printf("four");
				break;
				case 5:
				printf("five");
				break;
				case 6:
				printf("six");
				break;
				case 7:
				printf("seven");
				break;
				case 8:
				printf("eight");
				break;
				case 9:
				printf("nine");
				break;
		}
		s=s/10;
	}
	return 0;
}
