#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
        sum=sum+i;
        i++;
        }
    }
        printf(" %d sum \n",sum );

}