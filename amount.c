#include<stdio.h>
int main()
{
    int amt;
    printf("Enter amoount");
    scanf("%d",&amt);
    printf(" 10*%d",amt/10);
    amt=amt%10;
    printf("\n5*%d",amt/5);
    amt=amt%5;
    printf("\n1*%d",amt/1);
    return 0;
}