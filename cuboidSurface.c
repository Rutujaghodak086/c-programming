#include<stdio.h>
int main()
{
    int l,b,h,surfacearea,volume;
    printf("Enter a Length");
    scanf("%d",&l);
    printf("Enter a Breadth");
    scanf("%d",&b);
    printf("Enter a Height");
    scanf("%d",&h);
    surfacearea=2*(l*b+l*h+b*h);
    printf("Surface Area:%d",surfacearea);
    volume=l*b*h;
    printf("\nVolume :%d",volume);
    return 0;
}