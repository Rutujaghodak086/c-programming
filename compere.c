#include<stdio.h>
int main()
{
int a,b;
printf("Enter a Two Number");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is greater than %d",a,b);
}
else if(a<b)
{
printf("%d is smaller than %d",a,b);
}
else
{
printf("Number is equal");
}
return 0;
}
