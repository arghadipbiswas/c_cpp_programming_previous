#include<stdio.h>
#include <string.h>
struct student
{
	char name[50];
	char add[50];
	float marks;
	int roll;
}a[15],swap;
int main()
{
	int i,j,n;
printf("enter the nos:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nenter the name :");
	scanf("%s",&a[i].name);
	printf("\nenter the add : ");
	scanf("%s",&a[i].add);
	printf("\nenter the roll : ");
	scanf("%d",&a[i].roll);
	printf("\nenter the marks : ");
	scanf("%f",&a[i].marks);
	printf(".....................................");
}
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<(n-1-i);j++)
    	{
    		if(a[j].marks<a[j+1].marks)
    		{
    			swap=a[j];
    			a[j]=a[j+1];
    			a[j+1]=swap;
			}
		}
	}
	
    printf("\nRecord\tName  \tAddress  \tRoll   \tMarks\n");
for(i=0;i<n;i++)
{
	printf("\n%d  \t%s     \t%s  \t%d  \t%.2f\n",i+1,a[i].name,a[i].add,a[i].roll,a[i].marks);
}
}
