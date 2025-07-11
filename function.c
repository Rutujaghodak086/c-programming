#include<stdio.h>
void accept(int 1[100],int,n)
{
    int i;
    printf("\n enter a number =\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[],int,n)
{
    int i;
    printf("\n array number=\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
int main(int a[],int,n){
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    min=(min>a[i])?a[i]:min;
    return min;
}
int main(int a[],int,n){
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    max=(max<a[i])?a[i]:max;
}


int main()
{
    int a[100],n,key,ch;
    printf("Enter a  size of the array");
    scanf("%d",&n);
    printf("Enter the array element \n");
    for(i<0;i<n;i++){
        scanf("%d",a[i]);
    }
    printf("Menu");
    printf("\n1:Display Array");
    printf("\n2:Minimum Element");
    printf("\n3:Maximum element");
    printf("\n4:Sum of array");
    printf("\n5:Average of array");
    printf("\n6:Sort a Array");
    printf("\nEnter a choice");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    displayArray(a,n);
    break;
    case 2:
    printf("Minimum=%d\n",findMin(a,n));
    break;
    case 3:
    printf("Maximum=%d\n",findMax(a.n));
    break;
    case 4:
    printf("Sum=%d\n")
    }


}