#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
 typedef struct node
 {
     int info;
     struct node *next;
 }my_lol;
 my_lol *start;
 int insertbeg();
 void insertend();
 void deletebeg();
 void deleteend();
 void display();
 int main()
 {
     int choice;
     printf("**menu***");
     printf("choice any option");
     printf("\n1.insertbeg");
     printf("\n2.insertend");
     printf("\n3.deletebeg");
     printf("\n4.deleteend");
     printf("\n5.displau");
     printf("\n6.exit");
     while(1)
     {
         printf("enter the choice");
         scanf("%d", &choice);
         switch(choice)
         {
             case 1: insertbeg();
                     break;
               
         }
         printf("\n.................\n");
     }
 }
 int insertbeg()
 {
     int item;
     my_lol *ptr1;
     my_lol *ptr=(my_lol*)malloc(sizeof(my_lol));
     printf("enter the value:");
     scanf("%d", &ptr->info);
     if(ptr==NULL)
     {
         printf("\noverflow");
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
         
     }
 }
