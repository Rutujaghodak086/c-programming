#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        if(i%2==0)
          {
            printf(" %d\n",i);
          }   
        }      
    return 0;
}