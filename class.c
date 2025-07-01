#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,total,average;
    printf("Enter marks for subject");
    scanf("%f",&sub1);
    printf("enter marks for subject");
    scanf("%f",&sub2);
    printf("Enter marks for subject");
    scanf("%f",&sub3);
    total=sub1+sub2+sub3;
    average=total/3;
    printf("Total marks=%.2f\n",total);
    printf("Average marks= %.2f",average);
    if(sub1 <35 || sub2<35 ||sub3<35)
    {
        printf("Result  Fail");
    }
    else {
        if(average >=60){
            printf("class obtain 1st class\n");
        }else if(average >=50){
            printf("class obtain Second class\n");
        }
        else if(average>=35){
            printf("class obtain Pass\n");
        }else{
            printf("Result Fail\n");
        }
    }
    return 0;
}