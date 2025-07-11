#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y; 
    printf("Enter a two number");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("After swapping \n x=%d\n y=%d", x, y);
    return 0;
}