#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("enter th value of three nos: ");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("equal root");
		r1=-b/(2*a);
		printf("\nroot1=%f",r1);
	}
	else if(d>0)
	{
		d=sqrt(d);
		printf("unequal root");
		r1=(-b+d)/(2*a);
		r2=(-b-d)/(2*a);
		printf("\nroot1=%.3f",r1);
		printf("\nroot2=%.3f",r2);
	}
	else
	printf("imaginatory root");
	return 0;
}
