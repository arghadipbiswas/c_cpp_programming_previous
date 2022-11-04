#include <stdio.h>
int main()
{
        long int a[10], b[10], c[10];
        int i, j = 0, k = 0, n;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                c[j] = a[i];
                j++;
            }
            else
            {
                b[k] = a[i];
                k++;
            }
        }
        for (i = 0; i < k; i++)
        {
            printf("%ld,", b[i]);
        }
        for (i = 0; i < j; i++)
        {
            printf("\n%ld", c[i]);
        }
        return 0;
}
