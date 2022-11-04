#include<stdio.h>
#include<math.h>
int main() 
{
    int bin=0,r,i=0,dec;
    printf("Enter the no: ");
    scanf("%d",&dec);
    while(dec!=0)
    {
    	r=dec%2;
    	bin=bin+r*pow(10,i);
    	dec=dec/2;
    	i++;
	}
	printf("bin=%d",bin);
   return 0;
}
