#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;
void insert(int item);
int sob();
void display();
int isfull();
int isempty();
int main()
{
	int operation,item;
	printf("\nEnter the operation you want to in queue:");
	printf("\npress 1 to insert:");
	printf("\npress 2 to delete:");
	printf("\npress 3 to display:");
	printf("\npress 4 to exit.");
	while(1)
	{
		printf("\nyour chioce::");
		scanf("%d",&operation);
		switch(operation)
		{
			case 1:
				printf("\nElement to insert in the queue:");
				scanf("%d",&item);
				insert(item);
				break;
				case 2:
					item =sob();
					printf("\ndelete Element is:%d",item);
					break;
					case 3:
						display();
						break;	
							case 4:
								exit (1);
								break;
								default:
									printf("\nwrong value");
									break;
		}
		printf("\n...........................\n");
	}
	return 0;
}
void insert(int item)
{
	if(isfull())
	
		printf("\nqueue is Overflow condition:\n");
	else
	{
		if(front== - 1)
        front = 0;
        rear++;
	    queue[rear]=item;
	}
	
}
int sob()
{
	int item;
	if(isempty())
	{
		printf("\nqueue is Underflow condition:");
	    return;
	}
	else
	{
		item=queue[front];
	    front++;
	    return item;
	}
}
void display()
{
	int i;
	if(isempty())
	{
		printf("\nqueue is Underflow condition:");
		
	}
	for(i=front;i<=rear;i++)
	{
		printf("\t%d\n",queue[i]);
	}
}
int isfull()
{
	if(rear==size-1)
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
	if(front==-1 || front>rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
