#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    (a<b)?printf("max is %d",a):printf("max is %d",b);
    return 0;
}