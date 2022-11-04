#include"stdio.h"
#include"malloc.h"
// Structure of a node.
typedef struct stack
{
int data;
struct stack *next;
} my_stack;
my_stack *tos = NULL;
// Function for insert value in stack.
void push()
{
my_stack *ptr = (my_stack*) malloc (sizeof (my_stack));
printf("Give an integer to insert: ");
scanf("%d", &ptr -> data);
if(tos == NULL)
{
ptr -> next = NULL;
tos = ptr;
}
else
{
	ptr -> next = tos;
tos = ptr;
}
printf("%d is inserted in list.", ptr -> data);
}
//Function for delete node from stack.
void pop()
{
if(is_empty())
printf("Your stack is empty, nothing to delete! ");
else
{
my_stack *ptr = tos;
tos = tos -> next;
printf("%d is deleted successfully!", ptr -> data);
}
}
// function for checking the stack is empty or not.
int is_empty()
{
if(tos == NULL)
return 1;
else
return 0;
}
// Function for display the stack.
void display()
{
my_stack *ptr = tos;
if(ptr == NULL)
printf("Your stack is empty, nothing to dispaly! ");
else
{
printf("Your stack is: \n");
while(ptr != NULL)
{
printf("%d\n", ptr -> data);
ptr = ptr -> next;
}
}
}
main()
{
int ch;
printf("1:\n Push \n2: Pop \n3: Display\n4: Exit \n");
do
{
printf("\nEnter your choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: break;
default:
printf("Please give a valid input!");
}
printf("\n--------------------------------");
}
while(ch != 4);
printf("\nTHANKING YOU! HAVE A NICE DAY! ");
return 0;
}
