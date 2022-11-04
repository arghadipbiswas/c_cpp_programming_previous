#include<stdio.h>
int main()
{
  int n, r, c, s ,k;

  printf("Enter number of rows: ");
  scanf("%d",&n);

  for(r=1;r<=n;r++)
  {
  	k=r;
    for(s=1;s<=n-r;s++) printf(" ");
    for(c=1;c<=r;c++) printf("%d",k++);

    printf("\n");
  }

  return 0;
}

