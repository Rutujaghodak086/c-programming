#include<stdio.h>
int main()
{
    int n,i,a[100],first,second;
    printf("Enter a Size");
    scanf("%d",&n);
    printf("\n enter a element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    first=second=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>first){
            first=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i] !=first){
            if(a[i]>second){
                second=a[i];
            }
        }
    }
    printf("Second largest number %d\n",second);
    return 0;
}