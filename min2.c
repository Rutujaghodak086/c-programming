#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("max is %d",(a<b)?a:b);
    return 0;
}