#include<stdio.h>
int main()
{
    int n,i,key,flag=0,a[100];
    printf("Enter a Element size");
    scanf("%d",&n);
    printf("Enter a element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("ENter element for Serach");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Found");
    else
    printf("Not Found");
    return 0;
}