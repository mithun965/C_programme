#include<stdio.h>
void main()
{
    int i, array[10];
    printf("Enter array values: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0; i<10; i++)
    {
        printf("Array element at index no=%d is=%d\n",i,array[i]);
    }

printf("\nEnd of programme");
}