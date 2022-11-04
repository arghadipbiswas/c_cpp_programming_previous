#include<stdio.h>
int main()
{
    int a = 12;
    switch(a)
    {
    default:
        a = 4;
    case 6:
        a--;
    case 5:
        a = a+1;
    case 1:
        a = a-1;
    }
    printf("%d ", a);
    return 0;
}
