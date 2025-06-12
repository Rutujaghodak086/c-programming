#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ener 3 number");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("Max number is %d",c);
    return 0;
}