//Accept two integers from the user and interchange them. Display the interchanged numbers. Using temporary variable

//Swapping without 3rd variable

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("After swapping \nA=%d \nB=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nBefore Swapping \nA=%d \nB=%d",a,b);
    return 0;
}