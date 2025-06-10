#include<stdio.h>
int main()
{
    float  bs,da,hra,tax,totalsalary;
    int eid;
    char ename[100];
    FILE *fp;
    fp = fopen("salarySlip.tex","w");
    printf("Enter Employee Details :");
    printf("\nID");
    scanf("%d",&eid);
    printf("\nName");
    scanf("%s",&ename);
    printf("Enter Basic salary:");
    scanf("%f",&bs);
    printf("Enter daliy alouns(%%):");
    scanf("%f",&da);
    printf(" enter house rent(%%):");
    scanf("%f",&hra);
    printf("Enter Tax(%%):");
    scanf("%f",&tax);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    fprintf(fp,"\n-----------Employee salary Slip----------");
    fprintf(fp,"\n\t\tID          :%d",eid);
    fprintf(fp,"\n\t\tName        :%s",ename);
    fprintf(fp,"\n\t\tBasic salary:%.2f",bs);
    fprintf(fp,"\n\t\tDA (%%)     :%.2f ",da);
    fprintf(fp,"\n\t\tHRA(%%)     :%.2f",hra);
    fprintf(fp,"\n\t\tTax(%%)     :%.2f",tax);
    fprintf(fp,"\n\t\ttotal salary         :%.2f",totalsalary);
return 0;
}