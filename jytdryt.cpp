#include<stdio.h>
int main()
{
int a,b,c,hcf,lcf;
printf("enter two no:");
scanf("%d %d",&a,&b);
for( ; ; )
{
c=a%b;
if(c==0)
{
hcf=b;
printf("%d",hcf);
}

else
a=b;
b=c;
 
}
while(c!=0)
{
	lcf = (a*b)/c;
printf("%d",lcf);
}
}

