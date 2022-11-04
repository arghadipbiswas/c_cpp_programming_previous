//Program to sort an array and print in ascending order using bubble sort

#include <stdio.h>
 
void bubble_sort(long [], long);
 
int main()
{
  long array[100]={32,102,-65,51,27,85,66,23,13,57}, n=10, c;
  
  bubble_sort(array, n);
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%ld\n", array[c]);
 
  return 0;
}
 
void bubble_sort(long list[], long n)
{
  long c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
            t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
