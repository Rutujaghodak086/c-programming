#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
       printf(" %d sum \n",sum);

    }
    return 0;
}