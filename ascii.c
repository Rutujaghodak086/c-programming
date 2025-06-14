
// Accept a character from the user and display its ASCII value

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    printf("ASCII of: %c=%d",c,c);
    return 0;
    
}