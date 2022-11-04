#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//structure of  a node
typedef struct insert
{
	int data;
	struct insert *next;
}my_singly;
int main()
{
	int ch;
	printf("1: insert(beggining) \n ");
	printf("2: insert(end) \n");
	printf("3: insert(after a node)\n");
	printf("4: insert(before a node)\n ");
	printf("5: delete (beggining)\n");
	printf("6: delete(end)\n");
	printf("7: delete (after a node)\n");
	printf("8: delete (before a node) \n");
	printf("9: display");
	do
	{
		printf("\nenter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertbeg();
				break;
				case 2:
					insertend();
					break;
					case 3:
						insertafter();
						break;
			            case 4:
						    insertbef();
						    break;  
							case 5:
							    delbeg();
							    break;
								case 6:
								    delend();
									break;
									case 7:
										delaft();
										break;
										case 8:
											delbef();
											break;
								      		case 9:
								      			display();
								      			break;
								      			case 10:
								      				break;
								      				default:
								      					printf("try again!");
								      			
		}
		printf("\n...........................................\n");
	}
	while(ch!=10);
	printf("thank you!");
}
my_singly *start;
int insertbeg()
{
	my_singly *ptr=(my_singly*)malloc(sizeof (my_singly));
	printf("give an integer to insert (beggining):");
	scanf("%d",&ptr->data);
	if(ptr==NULL)
	{
		printf("overflow");
	}
	else
	{
		ptr->next=start;
		start=ptr;
		printf("%d is inserted in begging",ptr->data);
	}
}
int insertend()
{
	my_singly *find=start;
	my_singly *ptr=(my_singly*)malloc(sizeof (my_singly));
	printf("give an integer to insert (end):");
	scanf("%d",&ptr->data);
	if(ptr==NULL)
	{
		printf("overflow");
	}
	else
	{
		ptr->next=NULL;
		while(find->next!=NULL)
		{
			find=find->next;
		}
		find->next=ptr;
		printf("%d is inserted end.",ptr->data);
	}
}
int insertafter()
{
	int i=0,loc;
	my_singly *ptr=(my_singly*)malloc(sizeof (my_singly));
		my_singly *ptr1=start;
		my_singly *preptr1=start;
		
		if(ptr==NULL)
		{
			printf("overflow");
		}
		else
		{
			printf("enter loc:");
			scanf("%d",&loc);
			printf("give an integer to insert (after node):");
		    scanf("%d",&ptr->data);
			while(i<=loc)
			{
				preptr1=ptr1;
				ptr1=ptr1->next;
				i++;
			}
			preptr1->next=ptr;
			ptr->next=ptr1;
			printf("%d is inserted after node",ptr->data);
		}
}
int insertbef()
{
	int i=0,loc;
	my_singly *ptr=(my_singly*)malloc(sizeof (my_singly));
		my_singly *ptr1=start;
		my_singly *preptr1;
		if(ptr==NULL)
		{
			printf("overflow");
		}
		else
		{
			printf("enter loc:");
			scanf("%d",&loc);
			printf("give an integer to insert (before node):");
		    scanf("%d",&ptr->data);
			while(i!=loc)
			{
				preptr1=ptr1;
				ptr1=ptr1->next;
				i++;
			}
			ptr1->next=preptr1;
			preptr1->next=ptr;
			printf("%d is inserted before node",ptr->data);
		}
}
int delbeg()
{
	my_singly *ptr=start;
	if(ptr==NULL)
	{
		printf("underflow.");
	}
	else
	{
		start=start->next;
		printf("%d is deleted (beg).",ptr->data);
	}
}
int delend()
{
	my_singly *ptr=start;
	my_singly *preptr=start;
	if(ptr==NULL)
	{
		printf("underflow.");
	}
	else
	{
		while(ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		preptr->next=NULL;
		printf("%d is deleted (end).",ptr->data);
	}
}
int delaft()
{
	int i=0,loc;
	my_singly *ptr=start;
	my_singly *ptr1=start;
	if(ptr==NULL)
	{
		printf("underflow.");
	}
	else
	{
		printf("enter loc:");
			scanf("%d",&loc);
			while(i<=loc)
			{
				ptr1=ptr;
				ptr=ptr->next;
				i++;
			}
			ptr1=ptr->next;
			printf("%d is deleted(after node).",ptr->data);
	}
}
int delbef()
{
	int i=0,loc;
	my_singly *ptr=start;
	my_singly *ptr1=start;
	if(ptr==NULL)
	{
		printf("underflow.");
	}
	else
	{
		printf("enter loc:");
			scanf("%d",&loc);
			while(i<=loc-1)
			{
				ptr1=ptr;
				ptr=ptr->next;
				i++;
			}
			ptr1->next=ptr->next;

			printf("%d is deleted(berfore)",ptr1->data);
	}
}
int display()
{
	my_singly *find=start;
	if(find==NULL)
	{
		printf("empty");
	}
	else
	{
		while(find!=NULL)
		{
			printf("%d\n",find->data);
			find=find->next;
		}
	}
}

