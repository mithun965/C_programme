#include<stdio.h>
#include<string.h>
void main()
{
    
    char s1[50]="Hello";
    char s2[50]="Welcome";
    strcmp(s1,s2);
    if((strcmp(s1,s2))==0)
    {
        printf("Both strings are same:");
    }
    else
    {
        printf("\nBoth strings are not same");
    }

    
    printf("\n***Thank You***");
}