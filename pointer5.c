#include <stdio.h>
#include "funcation.h"
int main()
{
    int n, ch, y;
    while (1)
    {
        printf("\n\n1.Prime number \n 2.fectorial \n 3.fabbonic \n4.palindrom Number  \n5.Digit Count \n6.Armstrog \n7.Revers\n8.Neon\n9.Perfect\n10.Power\n11.Exit");
        printf("\nEnter Your Choice");
        scanf("%d", &ch);
        if (ch == 11)
            return 0;
        if (ch < 1 || ch > 11)
        {
            printf("\nIvalid Choice\n");
            continue;
        }
        printf("\nEnter anumber :");
        scanf("%d", &n);

        switch (ch)
        {
        case 1:
            if (prime(n) || n == 2 || n == 3)
                printf("\n%d is Prime Number", n);
            else
                printf("%d is not Prime Number", n);
            break;
        case 2:
            printf("\n Factorial %d\n", fact(n));
            break;
        case 3:
            faboncii(n);
            break;
        case 4:
            if (reverse(n) == n)
                printf("\nPalindrom");
            else
                printf("\n Not palindrom");
            break;
        case 5:
            printf("\n Digit Count : %d", count(n));
            break;
        case 6:
            if (armstrong(n) == n)
                printf("\nNumber is armstrong");
            else
                printf("\nNumber is Not Armstrog");
            break;
        case 7:
            printf("\n Reverse %d", reverse(n));
            break;
        case 8:
            if (neon(n) == n)
                printf("Neon \n");
            else
                printf("Not Neon");
            break;
        case 9:
            if (perfect(n) == n)
                printf("Number is perfect");
            else
                printf("Number is not perfect");
            break;
        case 10:
            printf("\n Enter a power");
            scanf("%d", &y);
            printf("\n %d of %d is %d", n, y, power(n, y));
            break;
        default:
            break;
        }
    }
    return 0;
}
