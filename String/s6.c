#include<stdio.h>
#include<string.h>
void main()
{
    char string1[200]="Mithun";
    char string2[200]="kumar";
    strcat(string2,string1);
    printf("Two strings are=%s\n", string2);
    printf("\nEnd of programme: ");
}