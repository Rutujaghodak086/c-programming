#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%s Number ",(n%2==0)?"even":"odd");
    return 0;
}