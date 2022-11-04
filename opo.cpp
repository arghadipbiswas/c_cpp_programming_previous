#include<stdio.h>
#include<string>
void option(int item);
int main()
{
	int b,c,f,item;
	char a,d,e,g;
	while(1)
	{
		printf("\t\t\t\t\t\t-:SIGN UP:- ");
	    printf("\n\n\t\t\tUsername :- ");
	    scanf("\n%s",&a);
	    printf("\n\t\t\tPassword :-");
	    scanf("\n%d",&b);
	    printf("\n\t\t\tConfirm Password :-");
	    scanf("\n%d",&c);
	    if(b==c)
	    {
		   printf("\n\t\t\t-:Congratulations ! your Account has been created:-\n\n");
		   break;
	    }
	    else
	   {
		printf("\n\t\t\topps ! sorry , Not match. Try again\n\n");
	   }
	}
    printf("\n\t\t\tPress any Key to continue...............\n\n");
	scanf("%s",&d);
	if(d!=0)
	{
		while(1)
	{
		printf("\n\n\t\t\t\t\t\t-:LOG IN:-");
	printf("\n\t\t\tName: ");
	scanf("%s",&e);
	printf("\n\t\t\tPassword:- ");
	scanf("%d",&f);
	if(c==f && b==f)
	{
		printf("\n\t\t\t........................................................\n\n");
		printf("\n\t\t\t\t\t-::Welcome To The Quize Game::-\n\n");
		printf("\n\t\t\t........................................................\n\n");
		break; 
	}
	else
	{
		printf(" \n\n\t\t\tNot match . try again to Log in ......................\n\n");
	}
	}
	}
	option(item);
	return 0;
	
}
