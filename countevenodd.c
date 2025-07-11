// Write a program to accept an integer and count the number of even digits, odd and zero digits in given number.
#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,zero=0,a[100];
    printf("Enter a Integerr");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            even++;
            else if(a[i]%2!=0)
            odd++;
            else
            zero++;
        }

    printf("\n Even No:%d \n Odd No: %d \n Zero:%d");
    return 0;
}