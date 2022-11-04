#include <stdio.h>
int main() 
{
    int i,x,y,p,hcf;
    printf("enter the nos:");
    scanf("%d %d ",&x,&y);
    p=(x<y)?x:y;
    for(i=1;i<=p;i++)
    {
    	if(x%i==0 && y%i==0)
    	hcf=i;
	}
	printf("hcf = %d",hcf);
    return 0;
}
