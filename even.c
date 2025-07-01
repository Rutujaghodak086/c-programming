#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    
    
    if(n<0){
        printf("Number is negative");
    }
    else if(n%2==0)

    {
        printf("Number is even %d",n);
    }

    else{
        printf("Number is Odd %d",n);
    }
    return 0;
}