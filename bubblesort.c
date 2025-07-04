#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    printf("Enter a size");
    scanf("%d",&n);
    printf("Enter aelement");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                // a[j]=a[j]+a[j+1];
                // a[j+1]=a[j]-a[j+1];
                // a[j]=a[j]-a[j+1];
                // int temp=a[j];
                // a[j]=a[j+1];
                // a[j+1]=temp;
               a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);
            }
        }
    }
    printf(" Sort array\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    return 0;
}
