#include<stdio.h>
#include<string.h>
void main()
{
    int value=0;
    char s1[]="Hello";
    char s2[]="Welcome";
    value=strcmp(s1,s2);
    printf("String1=%s\nString2=%s\n",s1,s2);
    if((strcmp(s1,s2))==0)
    {
        printf("Both strings are same\n");
    }
    else
    {
        printf("Both strings are not same\n");
    }
    printf("Value of string is=%d\n**Thank You**",value);



}