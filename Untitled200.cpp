#include <stdio.h>
int main()
{
    int i = 3,y=8,z;
   z= (++i)+(y++);
    printf("%d %d %d",i,y, z);
    return 0;
}
