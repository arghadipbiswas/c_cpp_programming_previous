#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct circular
{
	int data;
	struct circular *next;
};
struct circular *start;
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
							case 4:
								deletebeg();
								break;
		}
	}while(op!=5);
	printf("\n....................................\n");
	return 0;
}
int insertbeg()
{
	struct circular *ptr1;
    struct circular *ptr = (struct circular*) malloc (sizeof (struct circular));
    printf ("\nEnter The Element to Insert at Beginning: ");
	scanf ("%d",&ptr->data);
	if(ptr==NULL)
	{
		printf("overflow");
	}
	else
	{
	    if(start==NULL)  
        {
		    start=ptr;
            ptr->next =start;
        }
        else
		{
			ptr1=start;
		while(ptr1->next!=start)
		{
			ptr1=ptr1->next;
		}
		ptr->next=start;
		ptr1->next=ptr;
		start=ptr;
		}
	}
	printf("%d is node inserted.",ptr->data);
}
int insertend()
{
	struct circular *ptr1;
	struct circular *ptr = (struct circular*) malloc (sizeof (struct circular));
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
int deletebeg()
{
	struct circular *ptr1 = start;
	while(ptr1->next!=start)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=start->next;
	start=ptr1->next;
	printf("%d",ptr1->data);
}
int display()
{
    
        struct circular *ptr1 = start;
        while (ptr1->next !=  start)
        { 
            printf("%d->", ptr1->data);
            ptr1 = ptr1->next;
        }
        printf("%d", ptr1->data);
    
}

