#include<stdio.h>
int main()
{
    int id1,id2,id3,qty1,qty2,qty3,p1,p2,p3,per;
    char name1[30],name2[30],name3[30],cname[30],cmob[10];
    float total,disAmount,discount,payAmt;
    printf("Custmor Name");
    scanf("%s",&cname);
    printf("Mobile Number");
    scanf("%s",&cmob);
    printf("Enter 3 product Details\n");
    printf("Product ID\n");
    scanf("%d",&id1);
    printf("Product Name\n");
    scanf("%s",&name1);
    printf("Product Quantity\n");
    scanf("%d",&qty1);
    printf("Price per unit\n");
    scanf("%f",&p1);
     printf("Product ID\n");
    scanf("%d",&id2);
    printf("Product Name\n");
    scanf("%s",&name2);
    printf("Product Quantity\n");
    scanf("%d",&qty2);
    printf("Price per unit\n");
    scanf("%f",&p2); 
    printf("Product ID\n");
    scanf("%d",&id3);
    printf("Product Name\n");
    scanf("%s",&name3);
    printf("Product Quantity\n");
    scanf("%d",&qty3);
    printf("Price per unit\n");
    scanf("%f",&p3);
    total=(p1*qty1)+(p2*qty2)+(p3*qty3);
    if (total>1000)
        discount=10;
    else if (total>8000)
        discount=7;
    else if (total>5000)
        discount=3;
    else
         discount=0;
      disAmount=(total*discount)/100;
      payAmt=total - disAmount;
      printf("\nCustomer Name      : %s",cname);
      printf("\nMobile Number      :%s",cmob);
      printf("\n---------------------------------------------------------------");
      printf("\n|  ID |     Name    |   Price    |    Qty    |     Total       |");
      printf("\n---------------------------------------------------------------");
      printf("\n|%5d|%13s|%12f|%11d|%16f|",id1,name1,p1,qty1,(p1*qty1));
      printf("\n---------------------------------------------------------------");
      printf("\n|%5d|%13s|%12f|%11d|%16f|",id2,name2,p2,qty2,(p2*qty2));
      printf("\n---------------------------------------------------------------");
      printf("\n|%5d|%13s|%12f|%11d|%16f|",id3,name3,p3,qty3,(p3*qty3));
      printf("\n---------------------------------------------------------------");
      printf("\n\t\tTotal Amount    =%.2f",total);
      printf("\n\t\tDiscount        =%.2f",discount);
      printf("\n\t\tDiscount Amount =%.2f",disAmount);
      printf("\n\t\tpay amount      =%.2f",payAmt);
}