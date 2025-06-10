#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("After swapping \nA=%d \nB=%d",a,b);
    a=a+b-(b=a);
    printf("\nBefore Swapping \nA=%d \nB=%d",a,b);
    return 0;
}