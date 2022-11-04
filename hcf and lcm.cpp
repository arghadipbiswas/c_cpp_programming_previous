#include<stdio.h>
int main()
{
	int x,y,t,z,hcf,l,m,n;
	printf("enter two nos: ");
	scanf("%d %d",&x,&y);
	m=x;
	n=y;
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	do
	{
		z=x%y;
		if(z==0)
		{
			hcf=y;
		}
		else
		{
			x=y;
			y=z;
		}
	}
	while(z!=0);
	
		l=(m*n)/hcf;
		printf("%d  %d",hcf,l);
	
	return 0;
}
