#include<stdio.h>
#include<conio.h>
void main()
{
    int i, array[5];
    printf("Enter array ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        printf("Entered number at index=%d is=%d\n",i,array[i]);
    }
    printf("\n");
    for(i=0; i<5 ; i++)
    {
        printf("array element at index no=%d is=%d\n",i, array[i]);
    }
    printf("\n\nReverse Array\n\n");

    for(i=4; i>=0 ; i--)
    {
        printf("Array element at index no=%d is=%d\n",i, array[i]);
    }
    printf("----End of programme----");
} 