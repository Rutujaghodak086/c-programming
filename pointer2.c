
// Store address using Array

#include <stdio.h>
int main()
{
    int a[100], *p, i, n;
    p = &a[0];
    printf("ENter a Number");
    scanf("%d", &n);
    printf("Enter Number \n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Given data \n");
    for (i = 0; i < n; i++)
        printf("%d\n", p[i]);
    return 0;
}