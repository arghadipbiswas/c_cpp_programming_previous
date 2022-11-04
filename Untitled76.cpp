#include<stdio.h>
int main()
{
	int y,x=0;
	for(;x<=10;x++);
	y=((++x)++)+(++(++x));
	printf("%d %d %d ",++x,x+10,++x);
	
	return 0;
}
