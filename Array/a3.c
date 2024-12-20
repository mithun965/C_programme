#include<stdio.h>
void main()
{
    int i, array[5];
    printf("Enter array element: ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\n");

    for(i=0; i<5; i++)
    {
        printf("Array element at index no=%d is=%d\n",i,array[i]);
    }

    printf("\nReverse Array\n\n");

    for(i=4; i>=0; i--)
    {
        printf("Array element at index no=%d is=%d\n",i,array[i]);
    }

    printf("***Thank You***");


}