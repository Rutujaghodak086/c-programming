//Sum of Array Digit

#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter a Digit");
    scanf("%d",&n);
    printf("%d number\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum+=a[i];
printf("\n sum of Digit: %d",sum);
return 0;
}