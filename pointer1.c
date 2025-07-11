// Addition of two number using Pointer
#include <stdio.h>
int main()
{
    int a, b, *p, *q;
     p = &a;
    q = &b;
    printf("Enter anumber");
    scanf("%d %d", p,q);          //("%d%d" ,&a,&b)
    printf("Addition :%d", *p + *q);
    return 0;
}