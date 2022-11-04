#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct queue
{
	int info;
	struct queue *next;
 }my_queue; 
 my_queue *front=NULL;
 my_queue *rear=NULL;
 
 int main()
 {
 	int ch;
 	printf ("1.Insert:\n2.Delete:\n3.Display:\n4.Exit:");
 	while(1)
 	{
 		printf("\nEnter your choice: ");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1 :
 				insert();
 				break;
 			case 2 :
			 	delete();
			 	break;
			 case 3 :
			 	display();
			 	break;
			 case 4 :
			 	exit(1);
			 	break;
			 default :
			 	printf ("\nWrong Input !");
			 	
		 }
		 printf("\n..............................................\n");
	 }
	 return 0;
 }
 
 //Insert operation
int insert()
{
	my_queue *ptr=(my_queue*)malloc(sizeof(my_queue));
	printf ("\nEnter the element for insertion: ");
	scanf("%d",&ptr->info);
	if (front==NULL)
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
	printf("\nInserted element is: %d",ptr->info);
}

//Delete operation
int delete()
{
	if (isempty())
	{
	printf("\nQueue is Underflow");
	}


		my_queue *ptr=front;
	front=front->next;
  
printf("\nDeleted element is: %d",ptr->info);
}


 //isempty operation
 int isempty()
 {
 	if (front==NULL)
 	{
 		return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }
 
 //Display operation 
int display()
{
	my_queue *ptr=front;
	if (ptr==NULL)
	{
		printf ("\nQueue is Empty ");
	}
	else
	{
		printf("\nYour Queue is: ");
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->info);
			ptr=ptr->next;
		}
	}
 }
