#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a two number");
    scanf("%d%d",&a,&b) ;
     printf("\n1 Addition ");
    printf("\n2 Subtreaction");
    printf("\n3 Multiplication");
    printf("\n4 Division");
    printf("\nEnter Your Choice");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("Addition %d",(a+b));
        break;
         case 2:
        printf("Subtraction %d",(a-b));
        break;
         case 3:
        printf("Multiplication %d",(a*b));
        break;
         case 4:
        printf("Division%d",(a/b));
        break;  
    }
   
    return 0;
}