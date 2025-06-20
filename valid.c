#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter a three side of the tringle \n");
scanf("%f%f%f",&a,&b,&c);
if((a+b>c) &&(a+c>b)&&(b+c>a)){
printf("the tringle is valid");
}else
{
printf("The Tringle is not valid");
}
return 0;
}
