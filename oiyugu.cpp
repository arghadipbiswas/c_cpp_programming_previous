#include<stdio.h>
#include<conio.h>
int main()
{
    int i, arr[10], s, f, l, m;
    printf("Enter 10 elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &s);
    f = 0;
    l = 9;
    m = (f+l)/2;
    while(f <= l)
    {
        if(arr[m]<s)
            f = m+1;
        else if(arr[m]==s)
        {
            printf("\nThe number, %d found at Position %d", s, m+1);
            break;
        }
        else
            l = m-1;
        m = (f+l)/2;
    }
    if(f>l)
	       printf("\nThe number, %d is not found in given Array", s);
    getch();
    return 0;
}

