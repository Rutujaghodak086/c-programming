
//area and  circumference of circle

#include<stdio.h>
int main()
{
    float r,PI=3.14,area, circumference;
    printf("Enter a radius");
    scanf("%f",&r);
    area=PI*r*r;
    printf("area %.2f",area);
    circumference=2*PI*r;
    printf("\nCircumferance %.2f",circumference);
    return 0;
}