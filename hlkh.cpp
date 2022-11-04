#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct circular
{
	int data;
	struct circular *next;
}my_lol;
my_lol *start;
int insertbeg();
int insertend();
int deletebeg();
int deleteend();
int display();
int main()
{
	int op,ch;
	printf("\npress 1 insert at beg: ");
	printf("\npress 2 insert at end: ");
	printf("\npress 3 delete at beg: ");
	printf("\npress 4 delete at end: ");
	printf("\npress 5 display: ");
	printf("\npress 6 exit");
	do
	{
		printf("enter the choice: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				insertbeg();
				break;
				case 2:
					insertend();
					break;
					case 3:
						display();
						break;
							
		}
	}while(op!=4);
	printf("\n....................................\n");
	return 0;
}
int insertbeg()
{
	my_lol *ptr1;
    my_lol *ptr = (my_lol*) malloc (sizeof (my_lol));
	if(ptr==NULL)
	{
		printf("overflow");
	}
	else
	{
		printf ("\nEnter The Element to Insert at Beginning: ");
	    scanf ("%d",&ptr->data);
	    if(start==NULL)  
        {  
            ptr->next =start;
            start=ptr;
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
		printf("%d is node inserted.",ptr->data);
		}
	}
}
int insertend()
{
	my_lol *ptr1;
	my_lol *ptr = (my_lol*) malloc (sizeof (my_lol));
	printf ("\nEnter The Element to Insert at end: ");
	scanf ("%d",&ptr->data);
	ptr->next=start;
	ptr1=start;
	while(ptr->next!=start)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=ptr;
	printf("%d is node inserted",ptr->data);
}
int display()
{
	my_lol *find=start;
	while(find->next!=start)
	{
    	printf("%d\n",find->data);
		find=find->next;
	}
	printf("%d\n",find->data);
}

