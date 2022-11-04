#include<stdio.h>
void count(int k,int v,int a);
int main()
{
	int i,n,cs[100],maths[100];
	printf("enter the number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the marks of computer science of student %d in :\n",i+1);
		scanf("%d",&cs[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the marks of maths of student %d in %:\n",i+1);
		scanf("%d",&maths[i]);	
	}
	count(k,int v,int n );
}
void count(int k,int v,int n)
{
	
}
