#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], n, i, k,j;
    printf(" Enter a n");
    scanf("%d", &n);

    printf("\n enter aelement=\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("\t%d", a[i]);
    return 0;
}
