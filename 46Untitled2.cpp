#include <stdio.h>  
int main()  
{  
    int arr[] = {1, 2, 3, 4, 5},n;
    printf("Elements of given array present on even position: \n");
	scanf("%d",&n);    
    for (int i = 1; i < n; i = i+2) {   
        printf("%d\n", arr[i]);   
    }   
    return 0;  
}  
