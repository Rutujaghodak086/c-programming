
//max 3 number.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ener 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    printf("max is  a %d",a);
    else if(b>=a && b>=c)
    printf("max is  b %d",b);
    else
    printf("max is c  %d",c);
    return 0;

}