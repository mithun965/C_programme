#include<string.h>
#include<conio.h>
#include<stdio.h>

void main()
{
    char s1[100];
    printf("Enter a String(Capital letter): ");
    scanf("%s",s1);
    strlwr(s1);
    printf("\nlowercase string is=%s\n***Thank You***",s1);
}