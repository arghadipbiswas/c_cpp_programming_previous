#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//structure of a node
typedef struct queue
{
	int data;
	struct queue *next;
}my_queue;
my_queue *front=NULL;
my_queue *rear=NULL;
//function for insert value in queue
void insert()
{
	my_queue *ptr=(my_queue*)malloc(sizeof (my_queue));
	printf("give an inter to insert:");
	scanf("%d",&ptr->data);
	if(front==NULL)
	{
		front=rear=ptr;
		front->next=NULL;
		rear->next=NULL;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
		rear->next=NULL;
	}
	printf("%d is inserted in list.",ptr->data);
}
//function for delete node from queue
void sob()
{

	if(front==NULL)
	{
		printf("underflow");
	}
	
		my_queue *temp=front;
		front=front->next;
		printf("%d is deleted in list.", temp->data);
	
}
//function for display the queue
void display()
{
	my_queue *temp=front;
	if(temp==NULL)
	{
		printf("your queue is empty,nothing to display!");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int ch;
	printf("1: Push \n2: Pop \n3: Display\n4: Exit \n");
	do
	{
		printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
        	case 1: 
			    insert();
                break;
                case 2: 
				   sob();
                   break;
                   case 3: 
				       display();
                       break;
                       case 4: 
					      break;
                          default:
                               printf("Please give a valid input!");
		}
		printf("\n.............................");
	}
	while(ch!=4);
	{
		printf("thank you! Have a noice day!");
	}
	return 0;
}
