#include <stdio.h>
#include <stdlib.h>
#define size 5
int q[size];
int rear=-1;
int front=-1;
void insert(int item);
int delete();
void display();
int isfull();
int isempty();

int main()
{
	int operation,item;
	printf("\nEnter Any operation in a Queue :- ");
	printf("\nPress 1 to Insert : ");
	printf("\nPress 2 to Delete : ");
	printf("\nPress 3 to Display : ");
	printf("\nPress 4 to Exit : ");
	
	while(1)
	{
		printf("\nYour Choice : ");
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1 :
				printf("\nElement to insert in a Queue: ");
				scanf("%d",&item);
				insert(item);
				break;
			case 2 :
				item=delete();
				printf("\nDeleted element is: %d ",item);
				break;
			case 3 :
				display();
				break;
			case 4 :
			   exit(1);
			   break;
			default :
				printf("\nWrong Input !");
				break;
				
				
		}
		printf("\n..............................................\n");
	}
	return 0;
}

//Insert operation
void insert(int item)
{
	if(isfull())
	{
		printf("\nQueue is overflow ");
	
	}
	else
	{
		if(front==-1)	
	    front=0;	
		rear=rear+1;
		q[rear]=item;

	}

}

//Delete operation
int delete()
{
	int item;
	if(isempty())
	{
		printf("\nThe Queue is underflow ");
		exit(1);
	}
	item=q[front];
	front=front+1;
	return item;
	
}

//Display operation
void display()
{
	int i;
	if(isempty())
	{
		printf("\nQueue is underflow condition. ");
	
	}
	for (i=front;i<=rear;i++)
	{
		printf("\t%d\n",q[i]);
	}
}

//isfull operation
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

//isempty operation
int isempty()
{
	if(front==-1 ||front>rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
