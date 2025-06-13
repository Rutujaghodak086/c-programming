#include<stdio.h>
int main()
{
float Fahrenheit,celsius,kelvin;
printf("Enter Temerature in Fahrenheit");
scanf("%f",&Fahrenheit);
celsius=(Fahrenheit-32)*5/9;
printf("\n Temerature in Celsius:%.2f",celsius);
kelvin=celsius+273.15;
printf("\nKelvin :%.2f",kelvin);
return 0;
}
