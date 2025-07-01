// Minimum number of array

#include<stdio.h>
int main()
{
    int a[100],n,i,min;
    printf("Enter anumber ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("Min is %d",min);
}