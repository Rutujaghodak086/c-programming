#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    // if(n>0)
    // printf("+ve number");
    // else
    // printf("-ve number");
    (n>0)?printf("+ve number"):printf("-ve number");
    return 0;
}