#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    (n%2==0)?printf("even no"):printf("odd");
    return 0;
}