#include<stdio.h>
int main()
{
	int sec,hr,min;
	printf("enter the second: ");
	scanf("%d",&sec);
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("%dhour %dmin %dsec",hr,min,sec);
	return 0;
}
