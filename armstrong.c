#include<stdio.h>
int main()
{
    int n,r,c,arm=0;
    printf("Enter a Number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
     r=n%10;
     arm=(r*r*r)+arm;
      n=n/10; 
    }
    if(c==arm)
    printf("Armstrong Number");
    else
    printf("Not");
    return 0;
}