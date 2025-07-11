#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float marks;
};
int main()

{
    struct student s;
    printf("Enter Student Deials");
    printf("\n Roll no  :");
    scanf("%d", &s.roll);
    printf(" name  :");
    scanf("%s", &s.name);
    printf("Marks  :");
    scanf("%f", &s.marks);

    printf("\nGiven Data is :\n");
    printf("\nRoll Number   : %d", s.roll);
    printf("\nName          : %s", s.name);
    printf("\nMarks         : %.2f", s.marks);
    return 0;
};
