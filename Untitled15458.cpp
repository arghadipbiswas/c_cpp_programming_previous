#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
}

int main() {
    int a, b,sum;
    int *pa , *pb ;
    
    scanf("%d %d", &a, &b);
   sum= update(&a, &b);
    printf("%d",sum);

    return 0;
}
void update(int *a,int *b)
{
   sum=*a+*b;
   return sum;

}
