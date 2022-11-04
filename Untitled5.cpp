#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 no:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is tyhe gratest",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is tyhe gratest",b);
	}
	else if(a==b || b==c || c==a)
	{
		printf("same");
	}
	else
	printf("%d is gratest",c);
	return 0;
}
