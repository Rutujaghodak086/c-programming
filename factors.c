
// Write a program to print, count and sum of factors

#include <stdio.h>
int main()
{
    int n, i, count = 0, sum = 0;
    {
        printf("Enter a Number");
        scanf("%d", &n);
        printf("Factour %d", n);
        for (i = 0; i < n; i++)
        {
            printf("\n%d", i);
            count++;
            sum += i;
        }
    }
    printf("\nCount of factors: %d\n", count);
    printf("Sum of factors %d", sum);
    return 0;
}