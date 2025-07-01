#include <stdio.h>
int main()
{
    int i, n, j, a[100], high, low = 0, mid, key, flag = 0;

    printf("Enter a size");
    scanf("%d", &n);
    printf("Enter a element");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nenter key =");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1] - (a[j + 1] = a[j]);
            }
        }
    }
    high = n - 1;
     while (low <= high)
    {
        mid = low + high / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > key)
            high = mid - 1;
        else
            low = mid = 1;
    }
    if (flag == 1)
        printf("found");
    else
        printf("Not Found");
}