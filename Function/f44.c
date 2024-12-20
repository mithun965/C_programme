#include<stdio.h>
void str(char[]);

void main()
{   
    char string[200];
    printf("Enter Your String: ");
    gets(string);
    str(string);
    
}

void str(char string[])
{
    printf("String is=%s\n",string);
   
}