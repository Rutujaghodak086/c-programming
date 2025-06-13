#include<stdio.h>
int main()
{
    int a,b;
    float  arithmetic,harmonic;
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    arithmetic=(a+b)/2;
    harmonic=a*b/(a+b);
    printf("Arithmetic mean :%f",arithmetic);
    printf("\nHarmonic mean :%f",harmonic);
    return 0;

}