#include <stdio.h>
int main()
{
    int n, a[100], i, key, cnt = 0;
    printf("How many element enter");
    scanf("%d", &n);
    printf("Enter a element");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter a element for occurens");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            cnt++;
    }
    if (cnt == 0)
        printf("Non Found");
    else
        printf("Count is %d", cnt);
    return 0;
}