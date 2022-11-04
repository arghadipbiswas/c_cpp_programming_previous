#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three angles of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    sum =a+b+c; 
    if(sum==180 && a>0 && b>0 && c>0) 
    {
        printf("\n\tTriangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
	}   
    return 0;
}
