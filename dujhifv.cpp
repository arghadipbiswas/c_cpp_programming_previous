#include <stdio.h>
int main()
{
  int array[100],p,u,s,c,n;
  printf("Enter number of elements :\n");
  scanf("%d", &n);
  printf("Enter %d integer:\n", n);
  for (u=0;u<n;u++)
    scanf("%d", &array[u]);
  printf("Enter a number to search\n");
  scanf("%d",&s);
  for (p=0;p<n;p++)
  {
    if (array[p] == s)    
    {
      printf("%d is present at location %d\n",s,p+1);
      break;
    }
  }
  if (p == n)
    printf("%d isn't present in the array\n",s);
  return 0;
}
