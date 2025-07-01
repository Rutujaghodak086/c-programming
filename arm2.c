#include<stdio.h>
#include<math.h>
int main()
{
    float result=0;
    int n,cnt=0,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
     cnt++;
     n/=10;
    }
    n=temp;
    while(n>0)
    {
        int rem = n%10;
        result=result+pow(rem,cnt);
        n/=10;
    }
    if(result==temp)
    printf("Armstrong Number");
    else
    printf("Not");
    return 0;
    
}