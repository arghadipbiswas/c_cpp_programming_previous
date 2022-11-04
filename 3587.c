#include<stdio.h>
void sahil(int ,int ,int); 
void sahil(int x,int y,int z) //function defenitatoion
{
	int t;
	t=(x+y+z)/3;
	printf("%d",t);
}
int main()
{
	int x,y,z;
//	void sahil(int ,int ,int); //declaration
	printf("enter the three nos:");
	scanf("%d %d %d",&x,&y,&z);
	sahil(x,y,z); //calling
	printf("\nThanks for solving...........");
	return 0;
}

