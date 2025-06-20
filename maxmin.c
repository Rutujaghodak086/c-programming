#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a three number");
scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
{
printf("Maximum %d\n",a);
}
else if(b>=a && b>=c)
{
printf("Maximum %d\n",b);
}
else
{
printf("maximum is %d\n",c);
}
if(a<=b && a<=c)
{
printf("Minimum %d\n",a);
}
else if(b<=a && b<=c)
{
printf("Minimum %d\n",b);
}
else
{
printf("Minimum is %d",c);
}
return 0;
 }
