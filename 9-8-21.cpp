#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*arr,*arr1,n;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    arr1=(int*)malloc(n*sizeof(int));
    for(i=1;i<=n;i++)
    {
        arr1[i-1]=arr[n-i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(arr1+i));
    }
    return 0;
}
