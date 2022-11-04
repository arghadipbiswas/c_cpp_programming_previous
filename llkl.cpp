#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push(int item);
int pop();
void display();
int isfull();
int isempty();
int peek();
int main()
{
	int operation,item;
	printf("\nEnter the operation you want to do in stack :");
	printf("\npress 1 to push");
	printf("\npress 2 to pop");
	printf("\npress 3 to display");
	printf("\npress 4 to peek");
	printf("\npress 5 to exit");
	while(1)
	{
		printf("\nyour choice::");
		scanf("%d",&operation);
		switch(operation)
		{
			case 1:
				printf("\nElement to Push in the stack : ");
				scanf("%d",&item);
				push(item);
				break;
				case 2:
					item=pop();
					printf("\nPoped Element is : %d\n",item);
					break;
					case 3:
						display();
						break;
						case 4:
							item = peek();
                            printf("\nTop Element is : %d\n",item);
							break;
							case 5:
								exit(1);
								break;
								default:
									printf("\nwrong value");
		}
		printf("\n--------------------------------\n");
	}
	return 0;
}
void push(int item)
{
	int stack[top];
	if(isfull())
	{
		printf("\nStack is in Overflow condition.\n");
	}
	top++;
	stack[top]=item;
}
int pop()
{
	int stack[top],item;
	if(isempty())
	{
		printf("\nStack is in Underflow condition.\n");
		exit(1);
	}
	item=stack[top];
	top--;
	return item;
}
void display()
{
	int stack[top];
	if(isempty())
	{
		printf("\nStack is in Underflow condition.\n");
		return ;
	}
	for(int i=top;i>=0;i--)
	{
		printf("\t%d\n",stack[i]);
	}
}
int peek()
{
	int item,stack[top];
	if(isempty())
	{
		printf("\nStack is in Underflow condition.\n");
		exit (1);
	}
	   item=stack[top];
	   return item;
}
int isfull()
{
	if(top==size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}





