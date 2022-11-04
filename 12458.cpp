#include <stdio.h>

int main() 
{
    int n1,n2,max,min;
    char op;
    printf("\nEnter Any Two Numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("\nEnter The Operation To Be Done: ");
    scanf("%c",&op);
    
    switch(op)
    {
       case '+':
        
           printf("\nThe Sum Of The Two Numbers: %d",max+min);
           break;
        
       case '-':
        
           printf("\nThe Difference Of The Two Numbers: %d",max-min);
           break;
        
       case '*':
        
            printf("\nThe Product Of Two Numbers: %d",max*min);
            break;
        
       case '/':
        
            printf("\nThe Quotient Of Two Numbers: %d",max/min);
            break;
        
       default:
        
            printf("\nEnter Valid Operation!!!");
        
    }
    return 0;
}
