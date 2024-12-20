#include<stdio.h>
void main()
{
    char s1[30];
    printf("Enter string: ");
    //scanf("%s",s1);
    gets(s1);
    printf("The entered string is=%s\n",s1);
}