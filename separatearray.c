// Write a program to store even & odd elements of an array in two separate arrays

#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    int a[100], e[100], o[100];
    printf("Enter a elements");
    scanf("%d", &n);
    printf("%d element\n", n);
    for (i = 0; i < n; i++)
    
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            e[even] = a[i];
            even++;
        }
        else
        {
            o[odd] = a[i];
            odd++;
        }
    }
    printf("\n Even element");
    for (i = 0; i < even; i++)
    {
        printf("\n%d", e[i]);
    }
    printf("\n odd element");
    for (i = 0; i < odd; i++)
    {
        printf("\n%d", o[i]);
    }
    return 0;
}