#include<stdio.h>
void main()
{
    int count=0, i=0;
    char name[50];
    puts("Enter a string: ");
    gets(name);
    while(name[i]!='\0')
    {
        count=count+1;
        i=i+1;
    }
    puts(name);
    printf("Length of string is=%d\n**Thank You**",count);
}