#include<stdio.h>
int main()
{
    float  bs,da,hra,tax,totalsalary;
    printf("Enter Basic salary");
    scanf("%f",&bs);
    printf("Enter daliy alouns");
    scanf("%f",&da);
    printf(" enter house rent");
    scanf("%f",&hra);
    printf("Enter Tax");
    scanf("%f",&tax);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    printf("total salary %.2f",totalsalary);
return 0;
}