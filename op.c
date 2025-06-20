#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter a value");
    scanf("%d %c %d",&a,&op,&b);
    switch (op)
    {
    case '+':
    printf("%d + %d=%d",a,b,(a+b));
        break;
    case '-':
    printf("%d - %d=%d",a,b,(a-b));
        break;
    case '*':
    printf("%d * %d=%d",a,b,(a*b));
        break;
    case '/':
    printf("%d / %d=%d",a,b,(a/b));
        break;
    default:
    printf("Invalid Operation");
    }
    return 0;
}