#include <stdio.h>
#include <math.h>
// ------------------------Prime Number-------------------------------------------------------------------
int prime(int n)
{
    int i, no = 1;
    if (n < 2)
        return 0;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
// ---------------------------------------------Factorial------------------------------------------------
int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// ------------------------------------------------Fabonaciii Serice------------------------------------------
void faboncii(int n)
{
    int i, a = 0, b = 1, c;
    if (n == 1)

        printf("%d", a);
    else if (n == 2)
        printf("%d%d", a, b);
    else if (n > 2)
    {
        printf("%d %d", a, b);
        for (i = 2; i <= n; i++)
        {
            
            c = a + b;       // calculate next two number
            printf(" %d", c);
            a = b; // update a to a current value
            b = c; // update b to  the newaly  calculate value c
        }
    }
   
}
// ------------------------------------------------------Reverse-----------------------------------
int reverse(int n)
{
    int r, rev = 0;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}
// --------------------------------------------------------Digit Count----------------------------------
int count(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
// ----------------------------------------------------------- Armstrong Number---------------------------
int armstrong(int n)
{
    int r, cnt;
    cnt = count(n);
    float result;
    while (n > 0)
    {
        r = n % 10;
        result += pow(r, cnt);
        n = n / 10;
    }
    return result;
}
// -------------------------------------------------Neon Number-------------------------------------------
int neon(int n)
{
    n = n * n;
    int a, neon = 0;
    while (n > 0)
    {
        a = n % 10;
        neon = neon + a;
        n = n / 10;
    }
    return neon;
}
// ----------------------------------------------------Perfect Number------------------------------------------
int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
// ---------------------------------------------Power-------------------------------------------------------
int power(int n, int y)
{
    int result = 1, i;
    for (i = 0; i < y; i++)
    {
        result *= n;
    }
    return result;
}
