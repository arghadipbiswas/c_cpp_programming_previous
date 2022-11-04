#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node{
	int data; 
	struct node*next;
}my_lol;
my_lol*head;
int beginsert();
int endinsert();
int afterinsert();
int beforeinsert();
int begdelete();
int enddelete();
int scearch();
int display();

main()
{
	int choice;
	while(1)
	{
		printf("enter any choice:\n");
		scanf("&choice");
		printf("1.\nbeginsert 2.\nendinsert 3.\nafterinsert 4.\nbeforeinsert 5.\nbegdelete 6.\nenddelete 7.\ndisplay 8.\nscearch 9.\nexit:");
		printf("************\n");
		switch(choice)
		{
			case 1: beginsert();
			        break;
			case 2: endinsert();
			        break;
			case 3: afterinsert();
			        break;
			case 4: beforeinsert();
			        break;
			case 5: begdelete();
			        break;
			case 6: enddelete();
			        break;
			case 7: display();
			        break;
			case 8: scearch();
			        break;
			case 9: exit(0);
			        break;        
			default: printf("wrong choice");														        
		}
	}
}
my_lol *start;
	int beginsert()
	{
		my_lol *ptr=(my_lol*)malloc(sizeof(my_lol));
		if(ptr==NULL)
		{
			printf("overflow");
		}
		int item;
		printf("enter the value:");
		scanf("%d", &item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("\ninserted\n");
		return 0;
	}
	int endinsert()
	{
		
		my_lol *ptr1;
		my_lol *ptr=(my_lol*)malloc(sizeof(my_lol));
		if(ptr==NULL)
		{
			printf("overflow");
		}
		else
		{
			int item;
			printf("enter the data");
			scanf("%d", &item);
			ptr->data=item;
			if(head==NULL)
			{
				head=ptr;
			}
			else
			{
				ptr1=head;
				while(ptr1!=NULL)
				{
					ptr1=ptr1->next;
					
				}
				ptr1->next=ptr;
				ptr->next=NULL;
				printf("\ninserted");
			}
		}
	}
	int afterinsert()
	{
		my_lol *ptr1,*ptr2;
		my_lol *ptr=(my_lol*)malloc(sizeof(my_lol));
		if(ptr==NULL)
		{
			printf("overflow");
		}
		else
		{
			int item;
			printf("enter the value");
			scanf("%d", &item);
			ptr->data=item;
			if(head==NULL)
			head=ptr;
			else
			{
				
			}
		}
	}

