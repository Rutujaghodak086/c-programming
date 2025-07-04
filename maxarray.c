// maximum Number in array.

#include <stdio.h>
int main()
{
    int a[100], i, n, max;
    printf("Enter a N");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("Max is %d", max);
    return 0;
}
