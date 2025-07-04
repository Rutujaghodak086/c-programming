#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], n, i, key, j,k;
    printf(" Enter a n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter number to delete");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            // i--;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}