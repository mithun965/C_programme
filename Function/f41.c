#include<stdio.h>
void modify(char[], char[]);

void main()
{
    char str1[]="jenny";
    char str2[]="khartri";
    modify(str1,str2);
}

void modify(char str1[], char str2[])
{
    int i, length=0;
    for(i=0; str1[i]!='\0'; i++)
    {
        length=length+1;
    }
    
    printf("length of 1st string is=%d",length);

    str2[1] ='k';
    printf("\nString 1st is=%s\nString 2nd is=%s",str1,str2);

}