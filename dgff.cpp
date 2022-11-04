#include<stdio.h>
#include<string.h>
int main()
{
	int x;
	float z;
	char p[45];
	printf ("enter number:-");
	scanf ("%d",&x);
	printf("\n\npoint number:-");
	scanf("%f",&z);
	printf("\n\nenter name:-");
	scanf("%s",&p);
	printf("\n\nenter the char:-");
	scanf("%s",&p);
	printf ("\n\nint number=%d",x);
	printf("\n\nfloat number=%.2f",z);
	printf("\n\nname=%s",p);
	printf("\n\nchar=%s",p); 
	return 0;
}
