#include<stdio.h>
int main()
{
	int p,t,r,i=1;
	float si;
	printf("enter principal,   rate,  time:");
	scanf("%d %d %d",&p,&r,&t);
	for(;i<=5;)
	{
		printf("\n\t%d\n\t",i);
		i++;
		si=(p*r*t)/100;
		printf("%d",si);
	}
	return 0;
}
