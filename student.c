#include<stdio.h>
int main()
{
    int roll;
    char sub1[100],sub2[100],sub3[100],name[100],grade;
    float m1,m2,m3,total,avg;
    printf("Enter  student details\n");
    printf("Roll No");
    scanf("%d",&roll);
    printf("Name");
    scanf("%s",&name);
    printf("subject 1:");
    scanf("%s",&sub1);
     printf("subject 2:");
    scanf("%s",&sub2);
     printf("subject 3:");
    scanf("%s",&sub3);
    printf("marks 1:");
    scanf("%f",&m1);
    printf("marks 2:");
    scanf("%f",&m2);
    printf("marks 3:");
    scanf("%f",&m3);
    total=m1+m2+m3;
    avg=total/3;
    if(avg<=100 && avg>=90)
    grade='a';
    else if(avg<90 && avg>=80)
    grade='b';
    else if(avg<80 && avg>=70)
    grade='c';
    else if(avg<70 && avg>=50)
    grade='d';
    else if(avg<50 && avg>=35)
    grade='e';
    else
    grade='f';
    printf("Roll No : %d",roll);
    printf("\n Name : %s",name);
    printf("\n Subject 1 :%s",sub1);
    printf("\n Subject 2 :%s",sub2);
    printf("\n Subject 3 :%s",sub3);
    printf("\n marks 1:%f",m1);  
    printf("\n marks 2:%f",m2);
    printf("\n marks 3:%f",m3);
    printf("\n Total : %f",total);
    printf("\n avg   :%f",avg);
    printf("\n Grade :%c",grade);
    return 0;

}