#include<stdio.h>
int main()
{
char ch;
printf("Enter a lowercase character");
scanf("%c",&ch);
if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("Character %c is vowel\n",ch);
}
else{
printf("Character %c is Consonant",ch);
}
return 0;
}
