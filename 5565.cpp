#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,i,z;
	printf("enter the nos:");
	scanf("%d",&x);
	printf("enter the nos:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		z*=x;
	}
	printf("\nThe n is = %d ",z);
	return 0;
}
