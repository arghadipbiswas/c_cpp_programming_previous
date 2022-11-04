#include <stdio.h>
#include <stdlib.h>
#define size 5
int q[size];
int rear=-1, front=-1;
void insert(int item);
int delete();
void display();
int isfull();
int isempty();

int main()
{
	int operation, item;
	printf("Enter Any Operation in The Circular Queue : ");
	printf("\nPress 1 for Insert : ");
	printf("\nPress 2 for Delete : ");
	printf("\nPress 3 for Display : ");
	printf("\nPress 4 for Exit : \n");
	
	while(1)
	{
		printf("\nYour Choice : ");
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1 :
				printf("\nElement to insert in Circular Queue : ");
				scanf("%d",&item);
				insert(item);
				break;
			case 2 :
				item=delete();
				printf("\nDeleted Element in the Circular Queue is : %d" ,item);
				break;
			case 3 :
				display();
				break;
			case 4 :
				exit(1);
				break;
			default :
				printf("\nWrong Input ! ");
				
		}
		printf("\n...........................................\n");
	}
	return 0;
}

//Insert operation
void insert(int item)
{
	if(isfull())
	{
		printf("\nThe Queue is Overflow ");
	
	}
	else if ( rear==-1)
	{
		 rear++;
        front++;
	}
	else if (rear == size - 1 && front > 0)
	{
		rear=0;
	}
	else
	{
		 rear++;
	
	}
		q[rear]=item;
}

//Delete operation
int delete()
{
	int item,queue;
	if (isempty())
	{
		printf("\nThe Queue is Underflow : ");
		exit(1);
	}
 else if (front == rear)
    {
        printf("\n %d deleted", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        front++;
    }
}

//Display operation
void display()
{
	int i,queue;
	if(front > rear)
	{
	    for (i = front; i < size; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
	}
	 else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

//isfull operation
int isfull()
{
	if ((front == 0 && rear == size - 1) || (front == rear + 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//isempty operation
isempty ()
{
	if (front ==  - 1)  
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
