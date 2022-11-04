#include <stdio.h>
void rearrange_alternate_positions(int arr[], int n)
{
  int temp, j;
  for(int i = 1; i < n; i++)
  {
   if (arr[i] > 0)
   continue;
   j = i - 1;
   while ( arr[j] > 0 && j >= 0)
   {
     arr[j + 1] = arr[j];
     j--;
   }  
   arr[j + 1] = arr[i];
  }
}
int main()
{
  int n,i, arr[n];
  printf("\nEnter the number of elements : ");
  scanf("%d",&n);
  for(i = 0; i < n; i++)
  {
   scanf("%d",&arr[i]);
  }
  rearrange_alternate_positions(arr, n);
  for(i = 0; i < n; i++)
  {
   printf("%d  ",arr[i]);
  }
  return 0;
}
