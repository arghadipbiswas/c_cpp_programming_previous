#include<stdio.h>
#include<string.h>
int main()
{
	char x[30];
	int l,i,j,f=0;
	printf("enter words:");
	scanf("%s",x);
	l=strlen(x);
	for(i=0,j=l-1;i<=l/2 && f==0;i++,j--)
	{
		if(x[i]!=x[j])
		{
			f=1;
		}
	}
	if(f==0)
		{
			printf("palindrom");
		}
		else
		printf("not palimdrom");
		return 0;
}
