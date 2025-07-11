#include<stdio.h>
struct emp
{
    int id;
    char name[100], dep[100];
    float salary;
};
int main()
{
    struct emp e[100];   //array
    int n,i;

    printf("How many employee Details you wants to enter");
    scanf("%d",&n);
    printf("Enter Employee Details ");
    for(i=0;i<n;i++)
    {
        printf("\n Id :");
        scanf("%d",&e[i].id);
        printf("Name :");
        scanf("%s",&e[i].name);
        printf("Department :");
        scanf("%s",&e[i].dep);
        printf("Salary:");
        scanf("%f",&e[i].salary);
    }
    printf("Given data is \n");
    for(i=0;i<n;i++)
    {
        printf("\n\n ID            :%d",e[i].id);
        printf("\n\nName           :%s",e[i].name);
        printf("\n\nDepartment     :%s",e[i].dep);
        printf("\n\nSalary         :%.2f",e[i].salary);
    }
    return 0;
    
}