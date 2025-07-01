
//Prime Or Not 


#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
    }
        if(cnt==2)
           printf("Prime Number");
        else
           printf("Not Prime Number");
        return 0;
}