#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100], n, i, key, j;
    fp = fopen("number.txt", "r");
    printf(" Enter a n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
        printf("%d", a[i]);
    }
    printf("\n Enter number to delete");
    scanf("%d", &key);


    for (i = 0; i <n; i++)
    {
        if(a[i]==key)
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            break;
        }
    }
      for(i=0;i<n;i++) 
      printf("%d  ",a[i]);
      return 0;
}