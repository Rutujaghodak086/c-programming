#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        if(i&1)
          {
            printf(" %d\n",i);
          }   
        }      
    return 0;
}