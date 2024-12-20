#include<stdio.h>
char char_1();

void main()
{
    char ch;
    ch=char_1();
    printf("character is=%c",ch);
}

char char_1()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    return 'c';
}