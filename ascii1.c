#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c'is uppercase alphabet", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c'is lowercase alphabet", ch);
    }
    else if (ch >= 0 && ch <= 9)
    {
        printf("'%c' is not an alphabet", ch);
    }
    return 0;
}
