#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node
{
int data;
struct node *next;
}my_node;
int value;
my_node *start;
int main()
{
int operation;
printf ("\t\tSingle Linked List Operations : ");
printf ("\n\n1.Insertion at the Beginning : ");
printf ("\n2.Insertion at the End : ");
printf ("\n3.Deletion at the Beginning : ");
printf ("\n4.Deletion at the End : ");
printf ("\n5.Insert Before(Any Node): ");
printf ("\n6.Insert After(Any Node): ");
printf ("\n7.Delete Bfore(Any Node): ");
printf ("\n8.Delete After(Any Node): ");
printf ("\n9.Display : ");
// printf ("\n6.Count Linked list : ");
do
{
 printf ("\nEnter your choice: ");
 scanf ("%d",&operation);
 switch(operation)
 {
 case 1 :
 insert_beginning();
break;
 case 2 :
 insert_end();
break;
 case 3 :
 delete_beginning();
break;
 case 4 :
 delete_end();
break;
 case 5 :
 insertbefor();
break;
 case 6 :
 insertafter();
break;
 case 7 :
 deletebefore();
break;
 case 8 :
 deleteafter();
break;
 case 9 :
 display();
break;
 // case 6 :
 // count();
// break;

 //default :
 // printf ("\nWrong Output !");
 }
 printf ("\n........................................\n");
}
while(operation!=10);
}
//Insertion at the beginning operation
int insert_beginning()
{
my_node *ptr=(my_node*)malloc(sizeof(my_node));
printf ("\nEnter the element you want to insert at beginning: ");
scanf ("%d",&ptr->data);
if (ptr==NULL)
{
 printf("\nOverflow ");
}
 else
 {
 ptr->data=value;
ptr->next=start;
start=ptr;
printf("\nInserted in the beginning: %d",ptr->data);
}
}
//Insertion at The End
int insert_end()
{
my_node *find=start;
 my_node *ptr=(my_node*)malloc(sizeof(my_node));
printf("\nEnter the element you want to insert at the End: ");
scanf ("%d",&ptr->data);
if (ptr==NULL)
 {
 printf ("\nOverflow");
 }
else
{
 while(find->next!=NULL)
{
 find=find->next;
}
find->next=ptr;
ptr->next=NULL;
printf ("\nInserted at the end is: %d",ptr->data);
}
}
//Delete at the Beginning operation
int delete_beginning()
{
if (start==NULL)
 {
printf("\nUnderflow ");
}
else
 {
 my_node *ptr=start;
 start=start->next;
 printf ("\nDeleted element from the beginning: %d",ptr->data);
 }
}
//Delete at the End operation
int delete_end()
{
if (start==NULL)
{
 printf ("\nUnderflow ");
}
else
 {
 my_node *ptr=start;
 my_node *preptr=ptr;
 while(ptr->next!=NULL)
 {
 preptr=ptr;
 ptr=ptr->next;
 }
 preptr->next=NULL;
 printf ("\nDeleted element from the End: %d",ptr->data);
 }
}
//Display operation
int display()
{
my_node *ptr=start;
if (ptr==NULL)
{
 printf ("\nNode is Empty ");
}
else
{
 while(ptr!=NULL)
 {
 printf("\n%d",ptr->data);
 ptr=ptr->next;
 }
}
}
//Insert before a given Node operation
int insertbefor()
{
int i=0,num;
my_node *ptr1=start;
my_node *preptr=ptr1;
 my_node *ptr=(my_node*)malloc(sizeof(my_node));
printf("\nEnter the element you want to insert before a given Node: ");
scanf ("%d",&ptr->data);
if (ptr==NULL)
{
 printf ("\nOverflow");
}
else
{
 printf ("\nNumber: ");
 scanf("%d",&num);
 while(i<=num)
 {
 preptr=ptr1;
 ptr1=ptr1->next;
 i++;
 }
 preptr->next=ptr;
 printf ("\nInserted element is: %d",ptr->data);
}
}
//Insert After a given Node operation
int insertafter()
{
int i=0,num;
my_node *ptr1=start;
my_node *preptr=ptr1;
 my_node *ptr=(my_node*)malloc(sizeof(my_node));
printf("\nEnter the element you want to insert before a given Node: ");
scanf ("%d",&ptr->data);
if (ptr==NULL)
{
 printf ("\nOverflow");
}
else
{
printf ("\nNumber: ");
 scanf("%d",&num);
 while(i<=num)
 {
 preptr=ptr1;
 ptr1=ptr1->next;
 i++;
 }
 preptr->next=ptr;
 ptr->next=ptr1;
 printf ("\nInserted element is: %d",ptr->data);
}
 }
 //Delete before a given node operation
 int deletebefore()
 {
 int i=0,num;
 if (start==NULL)
 {
 printf ("Underflow");
 }
 else
 {
 printf ("\nNumber: ");
 scanf("%d",&num);
 my_node *ptr=start;
 my_node *ptr1=ptr;
 while(i<=num)
 {
 ptr1=ptr;
 ptr=ptr->next;
 i++;
 }
 ptr1->next=ptr->next;
 printf ("\nDeleted The Before node of a given Any node:%d",ptr->data);
 }
 }
 // Delete After a given node operation
 int deleteafter()
 {
 int i=0,num;
 if (start==NULL)
 {
 printf ("\nUnderflow");
 }
 else
 {
 printf ("\nNumber: ");
 scanf("%d",&num);
 my_node *ptr=start;
 my_node *ptr1=ptr;
 while(i<=num)
 {
 ptr1=ptr; 
 ptr=ptr->next;
 }
 ptr1=ptr->next;
 printf ("\nDeleted The After node of a given Any node:%d",ptr1->next);
 }
 }
