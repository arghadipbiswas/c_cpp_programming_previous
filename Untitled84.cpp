#include<stdio.h>
#include<math.h>  
int main()
{
  	int count,num,first;
  	printf("enter the nos:");
  	scanf("%d",&num);
    count = log10(num); 
	first = num / pow(10, count);   
  	printf("%d %d",count,first);
  	return 0;
}
