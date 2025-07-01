#include<stdio.h>
int main()
{
int n;
printf("Enter a Number");
scanf("%d",&n);
if(n %5 ==0 || n %7==0){
printf("%d is divisible by both 5 & 7\n",n);
}
else{
printf("%d is Not Divisible by both 5 7\n",n);
}
return 0;
}
