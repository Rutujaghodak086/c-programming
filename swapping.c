
//Swapping without 3rd variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("After swapping \nA=%d \nB=%d",a,b);
    //Swapping Logic
    //a=a+b-(b=a);
    a=a*b; //a=a+b;// a=a^b;       
    b=a/b;//b=a-b;// b=a^b;
    a=a/b;//a=a-b// a=a^b;
    printf("\nBefore Swapping \nA=%d \nB=%d",a,b);
    return 0;
}