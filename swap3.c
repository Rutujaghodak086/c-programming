//Accept two integers from the user and interchange them. Display the interchanged numbers. Without using temporary variable
//Using / and * operator


#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 number");
    scanf("%d%d",&a,&b);
    printf("\nAfter Swapping \nA=%d \nB=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nBefore Swapping \nA=%d \nB=%d",a,b);
    return 0;

}