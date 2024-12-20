#include<stdio.h>
//void display(char[]);
void display(char* );

void main()
{
    char string[]="jenny";
    display(string);
}

void display(char string[])
{
    printf("string is=%s",string);

}