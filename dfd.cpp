#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node
{
	int info;
	struct node *next;
}my_node;
my_node *start;
int main()
{
	int ch;
	printf ("\n\t\t\tCircular Single Linked List Operation Are: \n");
	printf ("\n1.Insert At Beginning: ");
	printf ("\n2.Insert At End: ");
	printf ("\n3.Delete At The Beginning: ");
	printf ("\n4.Delete At The End: ");
	printf ("\n5.Display: ");
	printf ("\n6.Exit: ");
	while(1)
	{
		printf ("\nEnter Your Choice: ");
		scanf ("%d",&ch);
		switch(ch)
		{
			case 1 :
				insert_begin();
				break;
			case 2 :
				insert_end();
				break;
			case 3 :
				delete_begin();
				break;
			case 4 :
				delete_end();
				break;
			case 5 :
				display();
				break;
			case 6 :
				printf ("\nSorry! Your Program is End..");
				exit(0);
				break;
			default :
				printf ("\nWrong Input! ");
		}
		printf ("\n................................\n");
	}
	return 0;
}

//Insert at the beginning operation
int insert_begin()
{
	int item;
	my_node *ptr1;
	my_node *ptr=(my_node*)malloc(sizeof(my_node));
	printf ("\nEnter The Element to Insert at Beginning: ");
	scanf ("%d",&item);
	ptr->info=item;
	if (ptr==NULL)
	{
		printf ("\nOverflow ");
	}
	else
	{
		ptr1=start;
		while(ptr1->next!=start)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
		ptr->next=start;
		start=ptr;
		printf ("\nNode Inserted at Beginning ");
	}
}

//Insert at the End operation 
int insert_end()
{
	int item;
	my_node *ptr1;
	my_node *ptr=(my_node*)malloc(sizeof(my_node));
	printf ("\nEnter The Element to Insert at End: ");
	scanf ("%d",&item);
	ptr->info=item;
	if (ptr==NULL)
	{
		printf ("\nOverflow ");
	}
	else 
	{
		ptr1=start;
		while(ptr1->next!=start)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
		ptr->next=start;
		printf ("\nNode Inserted at End ");
	}
}

//Delete at the beginning operation
int delete_begin()
{
	my_node *ptr=start;
	if (start==NULL)
	{
		printf ("\nUnderflow ");
	}
	else
	{
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=start->next;
		free(start);
		start=ptr->next;
		printf ("\nNode Deleted at Beginning ");
	}
}

//Delete at the End operation
int delete_end()
{
	my_node *ptr=start;
	my_node *ptr1;
	if (start==NULL)
	{
		printf ("\nUnderflow ");
	}
	else
	{
	
		while(ptr->next!=start)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		free(ptr);
		ptr1->next=start;
		printf ("\nNode Deleted at End ");
	}
}

//Display operation
int display()
{
	my_node *ptr=start;
	if (ptr==NULL)
	{
		printf ("\nList is empty, Nothing to Display ");
	}
	else
	{
		printf ("\nYour Elements are: ");
		while(ptr->next!=start)
		{
			printf ("\t %d",ptr->info);
			ptr=ptr->next;
		}
	}
}
