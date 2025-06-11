#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("max is %d",a);
    else
    printf("max id %d",b);
    return 0;
}