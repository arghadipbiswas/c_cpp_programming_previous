#include<stdio.h>
int main()
{
	int x,s=0;
	while(1)
	{
		printf("enter the nos:");
		scanf("%d",&x);
		if(x==999)
		{
			break;
		}
		s=s+x;
	}
	printf("%d=\nresult",s);
	return 0;
}
