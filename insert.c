#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], n, i, key, cnt = 0, pos;
    fp = fopen("number.txt", "r");
    printf(" Enter a n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
        printf("%d   ", a[i]);
    }
    printf("\n Enter position to for insert element");
    scanf("%d", &pos);

    printf("Enter insert element");
        scanf("%d", &key);

    for (i = 0; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = key;
    n++;
    for(i=0;i<n;i++)
    printf("%d   ",a[i]);
    return 0;
}