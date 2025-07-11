#include <stdio.h>
struct emp
{
    int id;
    char name[100], dep[100];
    float salary;
};
int main()
{
    struct emp r;

    printf("Enter a Employ Detils :");
    printf("\n Emter Emp id :");
    scanf("%d", &r.id);
    printf("Emter emp name :");
    scanf("%s", &r.name);
    printf("enter emp Department :");
    scanf("%s", &r.dep);
    printf("Emter emp salary :");
    scanf("%f", &r.salary);
    printf("\nGiven Data is     : ");
    printf("\n Emp Id         : %d", r.id);
    printf("\n Emp name       :%s", r.name);
    printf("\n Emp Department :%s", r.dep);
    printf("\n Emp Salary     : %.2f", r.salary);
    return 0;
}
