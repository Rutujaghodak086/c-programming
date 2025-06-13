//The basic salary of an employee is decided at the time of employment, which may be different for different employees. Apart from basic, employee gets 10% of basic as house rent, 30% of basic as dearness allowance. A professional tax of 5% of basic is deducted from salary. Accept the employee id and basic salary for an employee and output the take home salary of the employee.



#include<stdio.h>
int main()
{
    int id;
    float salary,hra,da,tax,home_salary;
    printf("Enter a emp Id:");
    scanf("%d",&id);
    printf("Enter a Basic Salary");
    scanf("%f",&salary);
    hra=0.10*salary;
    da=0.30*salary;
    tax=0.05*salary;
    home_salary=salary+hra+da-tax;
   // home_salary=salary*(0.10*salary)+(0.30*salary)-(0.05*salary);
    printf("\nEmployee id :%d",id);
    printf("\nBasic Salary :%f",salary);
    printf("\nHouse Rent Allowance(10%%):%.2f",hra);
    printf("\nDearness Allowance(30%%):%.2f",da);
    printf("\nProfessional Tax(5%%):%.2f",tax);
    printf("\nTake Home Salary: %.2f",home_salary);
    return 0;
}