#include<stdio.h>
int main()
{
    float cp,sp,amt;
    printf("Enter a cost price");
    scanf("%f",&cp);
    printf("Enter a Selling Price");
    scanf("%f",&sp);
    if(sp>cp){
        amt=sp-cp;
        printf("profit made:%.2f\n",amt);
    }
    else if(cp>sp){
        amt=cp-sp;
        printf("Loss Incurred:%.2f\n",amt);
    }
    else{
        printf("No Profit No Loss \n");
    }
    return 0;
}