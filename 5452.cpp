#include<stdio.h>
struct student
{
	char name[50];
	char add[50];
	int marks[50];
	int roll[50];
}a[15];
int main()
{
	int i,max,min,n;
printf("enter the nos:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("record no:%d",i+1);
	printf("\nenter the name :");
	scanf("%s",&a[i].name);
	printf("\nenter the add : ");
	scanf("%s",&a[i].add);
	printf("\nenter the marks : ");
	scanf("%d",&a[i].marks);
	printf("\nenter the roll : ");
	scanf("%d",&a[i].roll);
	printf(".....................................");
}
printf("\nenter record : ");
for(i=0;i<n;i++)
{
	printf("%d",i+1);
	printf("\nname=%s",a[i].name);
	printf("\nadd=%s",a[i].add);
	printf("\nmarks=%d",a[i].marks);
	printf("\nroll=%d",a[i].roll);

}

}
