#include<stdio.h>
int main()
{
	int n1,n2,n3 ,avg;
	float per;
	printf("enter the 3 nos:");
	scanf("%d%d%d",&n1,&n2,&n3);
	avg=(n1+n2+n3)/3;
	printf("\navg=%d",avg);
	per=avg/100;
	printf("\npercentage=%f",per);
	if(avg>=80 && avg<=100)
	printf("\ngrade A");
	if(avg>=60 && avg<80)
	printf("\ngrade B");
	if(avg>=40 && avg<60)
	printf("\ngrade C");
	if(avg<40)
	printf("\nFailed");
	return 0;
}
