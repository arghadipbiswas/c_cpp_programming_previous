#include<stdio.h>
#include<string.h>
void option(int item);
int start(int game);
void score(view);
int reset(s);
int help(r);
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
void option(int item)
{
	int o,game,view,score,s,r;
	printf("\n\n\t\t\t> Press 1 to Start The Game\n\n");
	printf("\n\n\t\t\t> Press 2 to View The Highest Score\n\n");
	printf("\n\n\t\t\t> Press 3 to Reset Score\n\n");
	printf("\n\n\t\t\t> Press 4 for Help\n\n");
	printf("\n\n\t\t\t> Press 1 to quit\n\n");
	while(1)
	{
		printf("\n\n\t\t\tChoose any option::");
	    scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("\n\n\t\t\t-:Start The Game:-");
				start(game);
			    break;
			    case 2:
			    	printf("\n\n\t\t\t-:View Highest Score:-");
			    	score(view);
			    	break;
			    	case 3:
			    		printf("\n\n\t\t\t-:Reset score:-");
			    		reset(s);
			    		break;
			    		case 4:
			    			printf("\n\n\t\t\t-:Help:-");
			    			help(r);
			    			break;
			    			case 5:
			    				printf("\n\n\t\t\t-:Quite:-");
			    				break;
		}
	}
}
int start(int game)
{
	printf("j");
}
void score(view)
{
	printf("j");
}
int reset(s)
{
	printf("j");
}
int help(r)
{
	printf("j");
}
