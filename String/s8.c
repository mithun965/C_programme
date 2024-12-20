#include<stdio.h>
#include<string.h>
void main()
{
    int count=0;
    char s1[50]="computer";
    char s2[50]="computer";
    count=strcmp(s1,s2);
    if(count==0)
    {
        printf("Both strings are same:");
    }
    else
    {
        printf("Both strings are not same");
    }

    printf("\nValue of strcmp=%d\n",count);
    printf("***Thank You***");

}