#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a 3 Number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b=a;
    if(b>c)
    c=b;
    printf("max is %d",c);
    return 0;

}