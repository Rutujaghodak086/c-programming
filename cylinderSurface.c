// Surface area and volume of cylinder

#include<stdio.h>
int main()
{
    float r,h,PI=3.14,area,volume;
    printf("Enter a radius");
    scanf("%f",&r);
    printf("Enter a dimension");
    scanf("%f",&h);
    area=2*PI*r*r+2*PI*r*h;
    printf("Area %.2f",area);
    volume=PI*r*r*h;
    printf("\nvolume %.2f",volume);
    return 0;
}