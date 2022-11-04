#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int k=0; 
	float x1,x0; 
	float eps=1e-5; 
	float f(float x);
	float fd(float x);
	printf("\nEnter the initial guess x0 : ");
	scanf("%f",&x0);
	x1=x0;
	do
	{
		k++;
		x0=x1;
		x1=x0-f(x0)/fd(x0);
	}while(fabs(x1-x0)>eps);
	printf("One root is %8.5f obtained at %dth iteration",x1,k);
}
float f(float x)
{
	return(x*x-8*x-4);
}
float fd(float x)
{
	return(3*x*x-3);
}
