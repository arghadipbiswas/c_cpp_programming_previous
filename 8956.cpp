#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node
{
	int data;
	struct node *next;
}my_node;
my_node *start;
int insert_begin();
int insert_end();
int insert_random();
int delete_begin();
int delete_end();
int delete_random();
int display();
int search();
int count();
int main()
{
	int ch;
	printf ("\n\t\tSingle Linked List Operations are : \n");
	printf ("\n1.Insert At Beginning: ");
	printf ("\n2.Insert At End: ");
	printf ("\n3.Random Insert: ");
	printf ("\n4.Delete At the Beginning: ");
	printf ("\n5.Delete At the End: ");
	printf ("\n6.Random Delete: ");
	printf ("\n7.Display The List: ");
	printf ("\n8.Search The Item: ");
	printf ("\n9.Count: ");
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
				insert_random();
				break;
			case 4 :
				delete_begin();
				break;
			case 5 :
				delete_end();
				break;
			case 6 :
				delete_random();
				break;
			case 7 :
				display();
				break;
			case 8 :
				search();
				break;
			case 9 :
				count();
				break;
			case 10 :
				printf ("\nSorry ! Your Program is End...");
				exit(0);
			    break;
			default :
				printf ("\nWrong Inputs ! ");
		}
		printf ("\n...............................\n");
	}
	return 0;
}

//Insert At beginning Operation
int insert_begin()
{
	int item;
	my_node *ptr=(my_node*)malloc(sizeof(my_node));
	printf ("\nEnter the element to insert at beginning: ");
	scanf ("%d",&item);
	ptr->data=item;
	if(ptr==NULL)
	{
		printf ("\nOverflow ");
	}
	else
	{
       
		ptr->next=start;
		start=ptr;
		printf ("\nNode Inserted ");
	}
}

//Insert At End operation
int insert_end()
{
	int item;
	my_node *find=start;
	my_node *ptr=(my_node*)malloc(sizeof(my_node));
	printf ("\nEnter the element to insert at End: ");
	scanf ("%d",&item);
		ptr->data=item;
	if(ptr==NULL)
	{
		printf ("\nOverflow ");
	}
	else
	{
		
		while(find->next!=NULL)
		{
			find=find->next;
		}
		find->next=ptr;
		ptr->next=NULL;
		printf ("\nNode Inserted ");
	}
}

//Random insertion operation
int insert_random()
{
	int i,loc,item;
	my_node *temp=start;
	my_node *ptr=(my_node*)malloc(sizeof(my_node));
	printf ("\nEnter The element for insertion: ");
	scanf ("%d",&item);
	ptr->data=item;
	if(ptr==NULL)
	{
		printf ("\nOverflow ");
	}
	else
	{
		printf ("\nEnter the Location after which you want to insert: ");
		scanf ("%d",&loc);
		for (i=0;i<loc;i++)
		{
			temp=temp->next;
			if (temp==NULL)
			{
				
				printf ("\nCann't Insert ");
				return 0;
			}
			else
			{
			ptr->next=temp->next;
			temp->next=ptr;
			
			}
		}
			printf ("\nNode Inserted ");
	}
}

//Delete at The Beginning operation
int delete_begin()
{
	my_node *ptr=start;
	if (start==NULL)
	{
		printf ("\nUnderflow ");
	}
	else
	{
		start=start->next;
		free(ptr);
		printf ("\nNode Deleted at Beginning ");
	}
}

//Delete At The End Operation 
int delete_end()
{
	my_node *ptr;
	my_node *ptr1;
	if (start==NULL)
	{
		printf ("\nUnderflow ");
	}
	else 
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->next;
		}
		ptr1->next=NULL;
		free(ptr);
		printf ("\nNode Deleted at End ");
	}
}

//Random Delete operation
int delete_random()
{
	int i,loc;
	my_node *ptr;
	my_node *ptr1;
	printf ("\nEnter the Location after which you want to delete: ");
	scanf ("%d",&loc);
	ptr=start;
	for (i=0;i<loc;i++)
	{
		ptr1=ptr;
		ptr=ptr->next;
		if (ptr==NULL)
		{
			printf ("\nList Empty ! Cann't be Delete ");
			return 0;
		}
	
	}
	ptr1->next=ptr->next;
	free(ptr);
	printf ("\nNode Deleted at position: %d",loc+1);
}

//Display operation 
int display()
{
	my_node *ptr=start;
	if (ptr==NULL)
	{
		printf ("\nList Empty! Nothing to Display ");
		
	}
	else
	{
		printf ("\nYour Elements are: ");	
		while(ptr!=NULL)
		{
		
			printf ("\t %d",ptr->data);
			ptr=ptr->next;
			
		}
	}
}

//Search Operation
int search()
{
	int item,i=0,flag;
	my_node *ptr=start;
	
	if (ptr==NULL)
	{
		printf ("\nList is Empty! Item not Found ");
		
	}
	else
	{
	    printf ("\nEnter The Item in which you want to Search: ");
		scanf ("%d",&item);
		while (ptr!=NULL)
		{
			if (ptr->data==item)
			{
				printf("\nItem Found at the Position: %d",i+1);
				flag=0;	
			}
			else 
			{
				flag=1;
				
			}
			i++;
			ptr=ptr->next;
		}
		if (flag==1)
		{
			printf ("\nItem Not Found ");
		}
	}
}

//Count How many Nodes are There
int count()
{
	int count=1;
	my_node *ptr=start;
	while (ptr->next!=NULL)
	{
		ptr=ptr->next;
		count++;
	}
	printf ("\nNumber of List are: %d ",count);
	
}


