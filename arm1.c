#include<stdio.h>
int main()
{
    int n,c=0,r=0,mul=1,cnt,rem;
    printf("Enter a number");
    scanf("%d",&n);
    int q=n;
    while(q!=0)
    {
        q=q/10;
        c++;
    }
    cnt=c;
    q=n;
    while (q!=0)
    {
        rem=q/10;
        while ((cnt!=0))
        {
            mul=mul*rem;
            cnt--;
        }
        r=r+mul;
        cnt=c;
        q=q/10;
        mul=1;
        
    }
    if(r==n)
    printf("%d is armstrong",n);
    else
    printf("%d is Not armstrong",n);
    return 0;
}