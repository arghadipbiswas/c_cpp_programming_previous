#include<stdio.h>
int sahil(int x);   // function declaration
int main()
{
	int x,y,z;
	printf("enter th nos:");
	scanf("%d",&x);
	sahil(x); //calling (function)
	return 0;
}
int sahil(int x)
{
	int z,y;
	z=x+y;
	printf("%d",z);
}
