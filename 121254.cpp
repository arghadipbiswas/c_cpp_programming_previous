#include<stdio.h>
int main()
{
	FILE *fp;
	char arr[200],buff[200];
	int i, n;
	char s;
	fp=fopen("newfile.txt","w");
	printf("No. of lines");
	scanf("%d",&n);//3
	printf("Enter contents");
	for(i=1;i<=n+1;i++)
	{
		fgets(arr,sizeof arr, stdin);
		fputs(arr,fp);
	}
	fclose(fp);
	fp=fopen("newfile.txt","r");
	printf("Contents are:\n");
	s=fgetc(fp);
	while(s!=EOF)
	{
		printf("%c",s);
		s=fgetc(fp);

	}
}
