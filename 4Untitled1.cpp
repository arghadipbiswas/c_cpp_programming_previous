//Find sum & avg of odd number present in an array//

#include<stdio.h>
void main(void)
{
	int x[100],n,i,sum=0,avg,c=0;
	printf("enter the nos:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",x[i]);//10,11,15,30,31,19,78,77
		if(x[i]%2!=0)
		{
			sum=sum+x[i];
			c++;
		}
	}
	avg=sum/c;
	printf("\n\tsum=%d,avg=%d",sum,avg);
}

10,20,30,40
40,30,20,10

502
205

1)Find max and min in array
2)printf locations of even nos in an array
3)printf elements of an array that are present in even locations 
4)printf the elements of an array in reverse oreder




