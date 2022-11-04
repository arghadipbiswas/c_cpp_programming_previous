#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);  
    i=1;
while(i<=rows)
{  
    j=i;
    while(j<=rows)
	{  
        printf("* ");
        j++;
    }
    i++;
    printf("\n");
}
return 0;
}
