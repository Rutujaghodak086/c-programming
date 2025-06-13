#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter initial velocity");
    scanf("%f",&u);
    printf("Enter acceleration");
    scanf("%f",&a);
    printf("Enter a time");
    scanf("%f",&t);
    v=u+a*t;
    printf("velocity : %.2f",v);
    s=u+a*t*t;
    printf("\nDistance : %.2f",s);
    return 0;

}