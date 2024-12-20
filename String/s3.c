#include<stdio.h>
#include<string.h>
void main()
{
    int count;
    char name[30];
    printf("Enter string: ");
    gets(name);
    count=strlen(name);
    printf("Total length of %s is=%d\n",name,count);
    printf("End of programme:");
}